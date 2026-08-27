document.addEventListener("DOMContentLoaded", () => {
  // 1. Load Data
  const data =
    typeof dsaData !== "undefined"
      ? dsaData
      : {
          problems: [],
          total: 0,
          difficulty: { Easy: 0, Medium: 0, Hard: 0 },
          categories: {},
        };

  // Update Stats
  const total = data.total || 0;
  const easy = data.difficulty.Easy || 0;
  const medium = data.difficulty.Medium || 0;
  const hard = data.difficulty.Hard || 0;

  document.getElementById("stat-total").innerText = total;
  document.getElementById("stat-easy").innerText = easy;
  document.getElementById("stat-medium").innerText = medium;
  document.getElementById("stat-hard").innerText = hard;

  setTimeout(() => {
    if (total > 0) {
      document.getElementById("bar-easy").style.width =
        `${(easy / total) * 100}%`;
      document.getElementById("bar-medium").style.width =
        `${(medium / total) * 100}%`;
      document.getElementById("bar-hard").style.width =
        `${(hard / total) * 100}%`;
    }
  }, 100);

  // Render Topic Pills
  const topicPillsWrapper = document.getElementById("topic-pills-wrapper");
  if (topicPillsWrapper && data.topic_stats) {
    const sortedTopics = Object.entries(data.topic_stats).sort(
      (a, b) => b[1] - a[1],
    );

    let mainTopics = sortedTopics.filter((t) => t[1] > 1);
    let hiddenTopics = sortedTopics.filter((t) => t[1] <= 1);

    // If we don't have enough main topics, just show the top 8
    if (mainTopics.length < 5 && sortedTopics.length > 5) {
      mainTopics = sortedTopics.slice(0, 8);
      hiddenTopics = sortedTopics.slice(8);
    }

    const renderPill = (topic, count) => {
      const pill = document.createElement("div");
      pill.className = "topic-pill";
      pill.style.cursor = "pointer";
      pill.innerHTML = `<span>${topic}</span><span class="count">${count}</span>`;

      pill.addEventListener("click", () => {
        const searchInput = document.getElementById("search-input");
        if (searchInput) {
          searchInput.value = `topic:"${topic}"`;
          searchInput.dispatchEvent(new Event("input"));

          const gridSection = document.getElementById("problems-grid");
          if (gridSection) {
            gridSection.scrollIntoView({ behavior: "smooth", block: "start" });
          }
        }
      });

      return pill;
    };

    mainTopics.forEach(([topic, count]) => {
      topicPillsWrapper.appendChild(renderPill(topic, count));
    });

    if (hiddenTopics.length > 0) {
      const hiddenContainer = document.createElement("div");
      hiddenContainer.style.display = "none";

      hiddenTopics.forEach(([topic, count]) => {
        hiddenContainer.appendChild(renderPill(topic, count));
      });

      const toggleBtn = document.createElement("div");
      toggleBtn.className = "topic-pill toggle-btn";
      toggleBtn.style.cursor = "pointer";
      toggleBtn.style.background = "var(--accent-cyan)";
      toggleBtn.style.color = "var(--bg-color)";
      toggleBtn.style.border = "none";
      toggleBtn.innerHTML = `<span>+ ${hiddenTopics.length} More</span>`;

      toggleBtn.addEventListener("click", () => {
        if (hiddenContainer.style.display === "none") {
          hiddenContainer.style.display = "contents";
          toggleBtn.innerHTML = `<span>- Show Less</span>`;
          toggleBtn.style.background = "var(--input-bg)";
          toggleBtn.style.color = "var(--text-primary)";
        } else {
          hiddenContainer.style.display = "none";
          toggleBtn.innerHTML = `<span>+ ${hiddenTopics.length} More</span>`;
          toggleBtn.style.background = "var(--accent-cyan)";
          toggleBtn.style.color = "var(--bg-color)";
        }
      });

      topicPillsWrapper.appendChild(hiddenContainer);
      topicPillsWrapper.appendChild(toggleBtn);
    }
  }

  // Generate Heatmap
  const heatmapData = {};
  let totalHeatmapProblems = 0;

  data.problems.forEach((p) => {
    if (p.date) {
      const d = new Date(p.date);
      if (!isNaN(d)) {
        // Format as YYYY-MM-DD
        const dateString = d.toISOString().split("T")[0];
        heatmapData[dateString] = (heatmapData[dateString] || 0) + 1;
        totalHeatmapProblems++;
      }
    }
  });

  document.getElementById("heatmap-total").innerText =
    `${totalHeatmapProblems} problems in the last year`;

  const heatmapGrid = document.getElementById("heatmap-grid");
  const todayDate = new Date();

  // Go back 364 days and align to Sunday
  const startDate = new Date();
  startDate.setDate(todayDate.getDate() - 364);
  startDate.setDate(startDate.getDate() - startDate.getDay());

  const dayIter = new Date(startDate);

  while (dayIter <= todayDate) {
    const dStr = dayIter.toISOString().split("T")[0];
    const count = heatmapData[dStr] || 0;

    const cell = document.createElement("div");
    cell.className = "heat-box";

    let level = 0;
    if (count === 1) level = 1;
    else if (count === 2) level = 2;
    else if (count >= 3 && count <= 4) level = 3;
    else if (count >= 5) level = 4;

    cell.classList.add(`level-${level}`);

    const options = { month: "short", day: "numeric", year: "numeric" };
    const prettyDate = dayIter.toLocaleDateString(undefined, options);
    cell.setAttribute(
      "data-title",
      `${count} problem${count !== 1 ? "s" : ""} on ${prettyDate}`,
    );

    heatmapGrid.appendChild(cell);
    dayIter.setDate(dayIter.getDate() + 1);
  }

  // Scroll heatmap to end (most recent)
  setTimeout(() => {
    const wrapper = document.querySelector(".heatmap-scroll-wrapper");
    if (wrapper) wrapper.scrollLeft = wrapper.scrollWidth;
  }, 100);

  const grid = document.getElementById("problems-grid");
  const searchInput = document.getElementById("search-input");
  const filterBtns = document.querySelectorAll(".filter-btn");
  const categorySelect = document.getElementById("category-select");
  const sortSelect = document.getElementById("sort-select");
  const resultsCount = document.getElementById("results-count");
  const randomBtn = document.getElementById("random-btn");
  const themeToggle = document.getElementById("theme-toggle");

  // Populate Category Dropdown
  Object.keys(data.categories).forEach((cat) => {
    const option = document.createElement("option");
    option.value = cat;
    option.innerText = cat;
    categorySelect.appendChild(option);
  });

  // 2. Render Cards
  function createProblemCard(p) {
    const folderName = p.folder_path.split("\\").pop().split("/").pop();
    const link = `https://github.com/cibidharan-rv/dsa/tree/main/${p.category}/${folderName}`;

    const card = document.createElement("a");
    card.href = link;
    card.target = "_blank";
    const diffClass = p.difficulty ? p.difficulty.toLowerCase() : "neutral";
    card.className = `problem-card glass glow-${diffClass}`;

    card.addEventListener("mouseenter", () => {
      gsap.to(card, {
        scale: 1.05,
        duration: 0.8,
        ease: "elastic.out(1, 0.3)",
      });
    });
    card.addEventListener("mouseleave", () => {
      gsap.to(card, { scale: 1, duration: 0.8, ease: "elastic.out(1, 0.3)" });
    });

    card.innerHTML = `
            <div class="card-header">
                <span class="problem-num">#${p.num}</span>
                <span class="difficulty-text ${diffClass}">${p.difficulty}</span>
            </div>
            <h3 class="problem-title">${p.title}</h3>
            <div class="problem-meta" style="flex-direction: column; align-items: flex-start; gap: 0.5rem;">
                <div style="display: flex; flex-wrap: wrap; gap: 0.3rem;">
                    ${(p.topics && p.topics.length > 0 ? p.topics : [p.category]).map((t) => `<span class="problem-topic">${t}</span>`).join("")}
                </div>
                <div style="display: flex; justify-content: flex-end; width: 100%; margin-top: 0.2rem;">
                    <span class="problem-date">${p.date || "Unknown Date"}</span>
                </div>
            </div>
        `;
    return card;
  }

  function renderProblems(problemsToRender) {
    grid.innerHTML = "";
    resultsCount.innerText = `Found: ${problemsToRender.length}`;

    problemsToRender.forEach((p) => {
      grid.appendChild(createProblemCard(p));
    });

    ScrollTrigger.refresh();
    animateCardsIn();
  }

  // 3. Search, Filter, and Sort Logic
  let currentDifficulty = "All";
  let currentCategory = "All";
  let currentSearch = "";
  let currentSort = "date-desc";
  let filteredData = [...data.problems];

  function applyFiltersAndSort() {
    let isTopicSearch = false;
    let searchTopic = "";

    // Check for topic:"Exact Topic Name"
    const topicMatch = currentSearch.match(/topic:"([^"]+)"/);
    if (topicMatch) {
      isTopicSearch = true;
      searchTopic = topicMatch[1];
    }

    // Filter
    filteredData = data.problems.filter((p) => {
      let matchesSearch = false;

      if (isTopicSearch) {
        matchesSearch =
          p.topics && p.topics.some((t) => t.toLowerCase() === searchTopic);
      } else {
        matchesSearch =
          p.title.toLowerCase().includes(currentSearch) ||
          p.category.toLowerCase().includes(currentSearch) ||
          p.num.toString().includes(currentSearch) ||
          (p.topics &&
            p.topics.some((t) => t.toLowerCase().includes(currentSearch)));
      }

      const matchesDiff =
        currentDifficulty === "All" || p.difficulty === currentDifficulty;
      const matchesCat =
        currentCategory === "All" || p.category === currentCategory;

      return matchesSearch && matchesDiff && matchesCat;
    });

    // Sort
    filteredData.sort((a, b) => {
      if (currentSort === "num-asc") return a.num - b.num;

      // Date parsing for sorting
      const dateA = a.date ? new Date(a.date).getTime() : 0;
      const dateB = b.date ? new Date(b.date).getTime() : 0;

      if (currentSort === "date-desc") return dateB - dateA; // Newest first
      if (currentSort === "date-asc") return dateA - dateB; // Oldest first
      return 0;
    });

    // Hide/Show Revision section BEFORE rendering problems to ensure GSAP ScrollTrigger
    // calculates the correct Y-axis positions for animations without jumping.
    const revisionSection = document.getElementById("revision-section");
    const revisionGrid = document.getElementById("revision-grid");
    if (revisionSection && revisionGrid) {
      const hasActiveFilters =
        currentSearch !== "" ||
        currentDifficulty !== "All" ||
        currentCategory !== "All";
      const hasDueProblems = revisionGrid.children.length > 0;

      if (hasActiveFilters) {
        revisionSection.style.display = "none";
      } else if (hasDueProblems) {
        revisionSection.style.display = "block";
      }
    }

    renderProblems(filteredData);
  }

  // Forgetting Curve Logic
  const revisionSection = document.getElementById("revision-section");
  const revisionGrid = document.getElementById("revision-grid");

  if (revisionSection && revisionGrid) {
    const todayDateObj = new Date();
    todayDateObj.setHours(0, 0, 0, 0);

    const revisionIntervals = [1, 3, 7, 14, 21, 30, 60, 90];
    const dueProblems = [];

    data.problems.forEach((p) => {
      if (p.date) {
        const pDate = new Date(p.date);
        pDate.setHours(0, 0, 0, 0);
        const diffTime = todayDateObj.getTime() - pDate.getTime();
        const diffDays = Math.round(diffTime / (1000 * 60 * 60 * 24));

        if (revisionIntervals.includes(diffDays)) {
          dueProblems.push(p);
        }
      }
    });

    if (dueProblems.length > 0) {
      revisionSection.style.display = "block";
      dueProblems.forEach((p) => {
        revisionGrid.appendChild(createProblemCard(p));
      });
    }
  }

  // Event Listeners for Filters/Sort
  const clearSearchBtn = document.getElementById("clear-search-btn");

  searchInput.addEventListener("input", (e) => {
    currentSearch = e.target.value.toLowerCase();
    if (clearSearchBtn) {
      clearSearchBtn.style.display =
        currentSearch.length > 0 ? "block" : "none";
    }
    applyFiltersAndSort();
  });

  if (clearSearchBtn) {
    clearSearchBtn.addEventListener("click", () => {
      searchInput.value = "";
      currentSearch = "";
      clearSearchBtn.style.display = "none";
      applyFiltersAndSort();
    });
  }

  filterBtns.forEach((btn) => {
    btn.addEventListener("click", () => {
      filterBtns.forEach((b) => b.classList.remove("active"));
      btn.classList.add("active");
      currentDifficulty = btn.dataset.filter;
      applyFiltersAndSort();
    });
  });

  categorySelect.addEventListener("change", (e) => {
    currentCategory = e.target.value;
    applyFiltersAndSort();
  });

  sortSelect.addEventListener("change", (e) => {
    currentSort = e.target.value;
    applyFiltersAndSort();
  });

  // Random Problem Button
  randomBtn.addEventListener("click", () => {
    if (filteredData.length === 0) {
      alert("No problems match your current filters!");
      return;
    }
    const randomIndex = Math.floor(Math.random() * filteredData.length);
    const randomProblem = filteredData[randomIndex];
    const folderName = randomProblem.folder_path
      .split("\\")
      .pop()
      .split("/")
      .pop();
    const link = `https://github.com/cibidharan-rv/dsa/tree/main/${randomProblem.category}/${folderName}`;
    window.open(link, "_blank");
  });

  // Theme Toggle Logic
  themeToggle.addEventListener("change", () => {
    if (themeToggle.checked) {
      document.body.classList.add("pink-mode");
      document.documentElement.classList.add("pink-mode");
    } else {
      document.body.classList.remove("pink-mode");
      document.documentElement.classList.remove("pink-mode");
    }
  });

  // Initial Render
  applyFiltersAndSort();

  // 4. GSAP Animations (The Magic)
  gsap.registerPlugin(ScrollTrigger);

  // Floating Background Objects (Parallax)
  gsap.to(".shape-1", {
    yPercent: 50,
    ease: "none",
    scrollTrigger: {
      trigger: "body",
      start: "top top",
      end: "bottom top",
      scrub: true,
    },
  });
  gsap.to(".shape-2", {
    yPercent: -80,
    xPercent: 20,
    ease: "none",
    scrollTrigger: {
      trigger: "body",
      start: "top top",
      end: "bottom top",
      scrub: true,
    },
  });
  gsap.to(".shape-3", {
    yPercent: -30,
    scale: 1.5,
    ease: "none",
    scrollTrigger: {
      trigger: "body",
      start: "top top",
      end: "bottom top",
      scrub: true,
    },
  });

  // Initial Hero Animation
  gsap.from(".hero > *", {
    y: 50,
    opacity: 0,
    duration: 1,
    stagger: 0.2,
    ease: "back.out(1.7)",
  });

  // Scroll Elastic Bouncing Cards
  function animateCardsIn() {
    const cards = document.querySelectorAll(".problem-card");
    if (cards.length === 0) return;

    gsap.set(cards, { y: 100, opacity: 0, scale: 0.8 });

    ScrollTrigger.batch(cards, {
      onEnter: (batch) => {
        gsap.to(batch, {
          opacity: 1,
          y: 0,
          scale: 1,
          stagger: { each: 0.1, grid: [1, 3] },
          overwrite: true,
          duration: 1.2,
          ease: "elastic.out(1, 0.4)",
        });
      },
      onLeave: (batch) => {
        gsap.to(batch, {
          opacity: 0,
          y: -50,
          scale: 0.9,
          overwrite: true,
          duration: 0.5,
        });
      },
      onEnterBack: (batch) => {
        gsap.to(batch, {
          opacity: 1,
          y: 0,
          scale: 1,
          stagger: 0.1,
          overwrite: true,
          duration: 1.2,
          ease: "elastic.out(1, 0.4)",
        });
      },
      onLeaveBack: (batch) => {
        gsap.to(batch, {
          opacity: 0,
          y: 50,
          scale: 0.9,
          overwrite: true,
          duration: 0.5,
        });
      },
      start: "top 95%",
      end: "bottom 5%",
    });
  }
});

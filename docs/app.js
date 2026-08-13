document.addEventListener('DOMContentLoaded', () => {
    // 1. Load Data
    const data = typeof dsaData !== 'undefined' ? dsaData : { problems: [], total: 0, difficulty: {Easy: 0, Medium: 0, Hard: 0}, categories: {} };
    
    // Update Stats
    const total = data.total || 0;
    const easy = data.difficulty.Easy || 0;
    const medium = data.difficulty.Medium || 0;
    const hard = data.difficulty.Hard || 0;
    
    document.getElementById('stat-total').innerText = total;
    document.getElementById('stat-easy').innerText = easy;
    document.getElementById('stat-medium').innerText = medium;
    document.getElementById('stat-hard').innerText = hard;

    setTimeout(() => {
        if (total > 0) {
            document.getElementById('bar-easy').style.width = `${(easy / total) * 100}%`;
            document.getElementById('bar-medium').style.width = `${(medium / total) * 100}%`;
            document.getElementById('bar-hard').style.width = `${(hard / total) * 100}%`;
        }
    }, 100);

    // Generate Heatmap
    const heatmapData = {};
    let totalHeatmapProblems = 0;
    
    data.problems.forEach(p => {
        if (p.date) {
            const d = new Date(p.date);
            if (!isNaN(d)) {
                // Format as YYYY-MM-DD
                const dateString = d.toISOString().split('T')[0];
                heatmapData[dateString] = (heatmapData[dateString] || 0) + 1;
                totalHeatmapProblems++;
            }
        }
    });

    document.getElementById('heatmap-total').innerText = `${totalHeatmapProblems} problems in the last year`;

    const heatmapGrid = document.getElementById('heatmap-grid');
    const todayDate = new Date();
    
    // Go back 364 days and align to Sunday
    const startDate = new Date();
    startDate.setDate(todayDate.getDate() - 364);
    startDate.setDate(startDate.getDate() - startDate.getDay()); 
    
    const dayIter = new Date(startDate);
    
    while (dayIter <= todayDate) {
        const dStr = dayIter.toISOString().split('T')[0];
        const count = heatmapData[dStr] || 0;
        
        const cell = document.createElement('div');
        cell.className = 'heat-box';
        
        let level = 0;
        if (count === 1) level = 1;
        else if (count === 2) level = 2;
        else if (count >= 3 && count <= 4) level = 3;
        else if (count >= 5) level = 4;
        
        cell.classList.add(`level-${level}`);
        
        const options = { month: 'short', day: 'numeric', year: 'numeric' };
        const prettyDate = dayIter.toLocaleDateString(undefined, options);
        cell.setAttribute('data-title', `${count} problem${count !== 1 ? 's' : ''} on ${prettyDate}`);
        
        heatmapGrid.appendChild(cell);
        dayIter.setDate(dayIter.getDate() + 1);
    }
    
    // Scroll heatmap to end (most recent)
    setTimeout(() => {
        const wrapper = document.querySelector('.heatmap-scroll-wrapper');
        if (wrapper) wrapper.scrollLeft = wrapper.scrollWidth;
    }, 100);

    const grid = document.getElementById('problems-grid');
    const searchInput = document.getElementById('search-input');
    const filterBtns = document.querySelectorAll('.filter-btn');
    const categorySelect = document.getElementById('category-select');
    const sortSelect = document.getElementById('sort-select');
    const resultsCount = document.getElementById('results-count');
    const randomBtn = document.getElementById('random-btn');
    const themeToggle = document.getElementById('theme-toggle');

    // Populate Category Dropdown
    Object.keys(data.categories).forEach(cat => {
        const option = document.createElement('option');
        option.value = cat;
        option.innerText = cat;
        categorySelect.appendChild(option);
    });

    // 2. Render Cards
    function renderProblems(problemsToRender) {
        grid.innerHTML = '';
        resultsCount.innerText = `Found: ${problemsToRender.length}`;

        problemsToRender.forEach((p) => {
            const folderName = p.folder_path.split('\\').pop().split('/').pop();
            const link = `https://github.com/cibidharan-rv/dsa/tree/main/${p.category}/${folderName}`;
            
            const card = document.createElement('a');
            card.href = link;
            card.target = "_blank";
            // Add underglow class based on difficulty
            const diffClass = p.difficulty ? p.difficulty.toLowerCase() : 'neutral';
            card.className = `problem-card glass glow-${diffClass}`;
            
            // GSAP hover effect (Elastic iOS Style)
            card.addEventListener('mouseenter', () => {
                gsap.to(card, {
                    scale: 1.05,
                    duration: 0.8,
                    ease: "elastic.out(1, 0.3)"
                });
            });
            card.addEventListener('mouseleave', () => {
                gsap.to(card, {
                    scale: 1,
                    duration: 0.8,
                    ease: "elastic.out(1, 0.3)"
                });
            });

            card.innerHTML = `
                <div class="card-header">
                    <span class="problem-num">#${p.num}</span>
                    <span class="difficulty-text ${diffClass}">${p.difficulty}</span>
                </div>
                <h3 class="problem-title">${p.title}</h3>
                <div class="problem-meta">
                    <span class="problem-topic">${p.category}</span>
                    <span class="problem-date">${p.date || 'Unknown Date'}</span>
                </div>
            `;
            grid.appendChild(card);
        });

        // Re-initialize GSAP ScrollTrigger for new cards
        ScrollTrigger.refresh();
        animateCardsIn();
    }

    // 3. Search, Filter, and Sort Logic
    let currentDifficulty = 'All';
    let currentCategory = 'All';
    let currentSearch = '';
    let currentSort = 'num-asc';
    let filteredData = [...data.problems];

    function applyFiltersAndSort() {
        // Filter
        filteredData = data.problems.filter(p => {
            const matchesSearch = p.title.toLowerCase().includes(currentSearch) || 
                                  p.category.toLowerCase().includes(currentSearch) || 
                                  p.num.toString().includes(currentSearch);
            const matchesDiff = currentDifficulty === 'All' || p.difficulty === currentDifficulty;
            const matchesCat = currentCategory === 'All' || p.category === currentCategory;
            
            return matchesSearch && matchesDiff && matchesCat;
        });

        // Sort
        filteredData.sort((a, b) => {
            if (currentSort === 'num-asc') return a.num - b.num;
            
            // Date parsing for sorting
            const dateA = a.date ? new Date(a.date).getTime() : 0;
            const dateB = b.date ? new Date(b.date).getTime() : 0;
            
            if (currentSort === 'date-desc') return dateB - dateA; // Newest first
            if (currentSort === 'date-asc') return dateA - dateB;  // Oldest first
            return 0;
        });

        renderProblems(filteredData);
    }

    // Event Listeners for Filters/Sort
    searchInput.addEventListener('input', (e) => {
        currentSearch = e.target.value.toLowerCase();
        applyFiltersAndSort();
    });

    filterBtns.forEach(btn => {
        btn.addEventListener('click', () => {
            filterBtns.forEach(b => b.classList.remove('active'));
            btn.classList.add('active');
            currentDifficulty = btn.dataset.filter;
            applyFiltersAndSort();
        });
    });

    categorySelect.addEventListener('change', (e) => {
        currentCategory = e.target.value;
        applyFiltersAndSort();
    });

    sortSelect.addEventListener('change', (e) => {
        currentSort = e.target.value;
        applyFiltersAndSort();
    });

    // Random Problem Button
    randomBtn.addEventListener('click', () => {
        if (filteredData.length === 0) {
            alert("No problems match your current filters!");
            return;
        }
        const randomIndex = Math.floor(Math.random() * filteredData.length);
        const randomProblem = filteredData[randomIndex];
        const folderName = randomProblem.folder_path.split('\\').pop().split('/').pop();
        const link = `https://github.com/cibidharan-rv/dsa/tree/main/${randomProblem.category}/${folderName}`;
        window.open(link, '_blank');
    });

    // Theme Toggle Checkbox
    themeToggle.addEventListener('change', (e) => {
        if (e.target.checked) {
            document.body.classList.add('light-mode');
        } else {
            document.body.classList.remove('light-mode');
        }
    });

    // Initial Render
    applyFiltersAndSort();

    // 4. GSAP Animations (The Magic)
    gsap.registerPlugin(ScrollTrigger);

    // Floating Background Objects (Parallax)
    gsap.to(".shape-1", { yPercent: 50, ease: "none", scrollTrigger: { trigger: "body", start: "top top", end: "bottom top", scrub: true }});
    gsap.to(".shape-2", { yPercent: -80, xPercent: 20, ease: "none", scrollTrigger: { trigger: "body", start: "top top", end: "bottom top", scrub: true }});
    gsap.to(".shape-3", { yPercent: -30, scale: 1.5, ease: "none", scrollTrigger: { trigger: "body", start: "top top", end: "bottom top", scrub: true }});

    // Initial Hero Animation
    gsap.from(".hero > *", {
        y: 50, opacity: 0, duration: 1, stagger: 0.2, ease: "back.out(1.7)"
    });

    // Scroll Elastic Bouncing Cards
    function animateCardsIn() {
        const cards = document.querySelectorAll('.problem-card');
        if (cards.length === 0) return;

        gsap.set(cards, { y: 100, opacity: 0, scale: 0.8 });

        ScrollTrigger.batch(cards, {
            onEnter: batch => {
                gsap.to(batch, {
                    opacity: 1, y: 0, scale: 1,
                    stagger: { each: 0.1, grid: [1, 3] },
                    overwrite: true, duration: 1.2,
                    ease: "elastic.out(1, 0.4)"
                });
            },
            onLeave: batch => gsap.set(batch, { opacity: 0, y: -100, scale: 0.8, overwrite: true }),
            onEnterBack: batch => {
                gsap.to(batch, {
                    opacity: 1, y: 0, scale: 1, stagger: 0.1,
                    overwrite: true, duration: 1.2,
                    ease: "elastic.out(1, 0.4)"
                });
            },
            onLeaveBack: batch => gsap.set(batch, { opacity: 0, y: 100, scale: 0.8, overwrite: true }),
            start: "top 90%",
            end: "bottom 10%"
        });
    }
});

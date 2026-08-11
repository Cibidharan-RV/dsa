# 659. Split Array Into Consecutive Subsequences

## Difficulty
Medium

## Topics
- Greedy
- Hash Table
- Array

---

## Idea

Maintain a collection of subsequences using `vector<unordered_set<int>>`.

For each number:

1. Search for a subsequence ending at `x-1`.
2. If multiple subsequences are eligible, prioritize extending one whose length is less than 3.
3. If no suitable subsequence exists, start a new subsequence with `x`.
4. After processing all numbers, verify that every subsequence has length at least 3.

The greedy intuition was to always extend shorter subsequences first so they become valid before extending already valid ones.

---

## Time Complexity

- **Time:** `O(n²)` (worst case)
- **Space:** `O(n)`

---

## Key Learning

- A correct greedy algorithm is not necessarily an efficient one.
- Explicitly storing every subsequence leads to repeated scans and poor performance.
- The choice of **state representation** has a major impact on complexity.
- Sometimes only the endpoint of a subsequence is needed instead of the entire subsequence.

---

## Mistakes Made

- Represented each subsequence using an `unordered_set`, even though only the last element and length were required.
- Scanned all subsequences for every element, resulting in quadratic time.
- Focused on storing complete subsequences instead of identifying the minimum state needed for future decisions.

---

## Follow-up

The optimal solution compresses the state by maintaining:

- `freq[x]` → remaining occurrences of `x`.
- `end[x]` → number of subsequences ending at `x`.

This removes the need to search through all subsequences and achieves `O(n)` time.
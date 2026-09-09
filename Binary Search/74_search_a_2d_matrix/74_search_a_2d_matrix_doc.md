# [74. Search a 2D Matrix](https://leetcode.com/problems/search-a-2d-matrix/)

## Date
2026-09-09

## Difficulty
Medium

## Topics
- Array
- Binary Search
- Matrix

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/search-a-2d-matrix/submissions/2136478124)

Treat the 2D matrix as a single sorted 1D array and perform binary search
on the virtual indices.
For a virtual index i:
row = i / columns
column = i % columns
This converts the virtual 1D index into the corresponding matrix position.
Binary search is performed over [0, rows * columns - 1].

---

## Time Complexity

O(log(m * n))

## Space Complexity

O(1)

---

## Similar Problems

- [Search a 2D Matrix II](https://leetcode.com/problems/search-a-2d-matrix-ii/)
- [Split Message Based on Limit](https://leetcode.com/problems/split-message-based-on-limit/)

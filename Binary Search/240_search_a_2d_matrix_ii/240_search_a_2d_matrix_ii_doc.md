# [240. Search a 2D Matrix II](https://leetcode.com/problems/search-a-2d-matrix-ii/)

## Date
2026-09-10

## Difficulty
Medium

## Topics
- Array
- Binary Search
- Divide and Conquer
- Matrix

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/search-a-2d-matrix-ii/submissions/2137362784)

Start from the top-right corner of the matrix.
If the current value is greater than the target, move left because all values
below it in the same column are even greater.
If the current value is less than the target, move down because all values
to its left in the same row are even smaller.
Each move eliminates an entire row or column.

---

## Time Complexity

O(m + n)

## Space Complexity

O(1)

---

## Key Learning

- A sorted matrix does not need to be searched cell-by-cell; its row and column
  ordering can be used to eliminate an entire dimension at every step.
- Starting from the top-right corner makes each comparison sufficient to
  eliminate either one row or one column.

---

## Mistakes Made

- Initially tried to create a possible region by separately eliminating rows
  and columns based on their starting and ending values.
- Tried eliminating rows and columns simultaneously, without proving that both
  could be safely discarded.

---

## Similar Problems

- [Search a 2D Matrix](https://leetcode.com/problems/search-a-2d-matrix/)

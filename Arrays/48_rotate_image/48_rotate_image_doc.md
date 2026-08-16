# [48. Rotate Image](https://leetcode.com/problems/rotate-image/)

## Date
2026-08-16

## Difficulty
Medium

## Topics
- Array
- Math
- Matrix

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/rotate-image/submissions/2108529473)

Important observation: Taking transpose and reversing each rows will give 90°
- take transpose of the square matrix.
- reverse each row.
this provides in-place transition and time complexity O(n²) which is optimal.

---

## Time Complexity

O(n²)

## Space Complexity

O(1)

---

## Key Learning

- Matrix rotation = transpose then reverse rows

---

## Mistakes Made

- nothing

---

## Similar Problems

- [Determine Whether Matrix Can Be Obtained By Rotation](https://leetcode.com/problems/determine-whether-matrix-can-be-obtained-by-rotation/)

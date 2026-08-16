# [54. Spiral Matrix](https://leetcode.com/problems/spiral-matrix/)

## Date
2026-08-16

## Difficulty
Medium

## Topics
- Array
- Matrix
- Simulation

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/spiral-matrix/submissions/2108825970)

Traverse the matrix layer by layer using four boundaries: left, right, top,
and bottom. After traversing each side, move that boundary inward and
continue until all elements are visited.

The main idea is:
> Keep shrinking the outer boundary and traverse the remaining matrix in spiral order.

---

## Time Complexity

O(n * m)

## Space Complexity

O(n * m)

---

## Key Learning

- Use inclusive left/top and exclusive right/bottom boundaries.
- Check the boundaries before traversing the bottom and left sides to avoid duplicates.

---

## Mistakes Made

- Managing four boundaries carefully.
- Traversing the matrix in four directions without revisiting elements.

---

## Similar Problems

- [Spiral Matrix II](https://leetcode.com/problems/spiral-matrix-ii/)
- [Spiral Matrix III](https://leetcode.com/problems/spiral-matrix-iii/)
- [Spiral Matrix IV](https://leetcode.com/problems/spiral-matrix-iv/)

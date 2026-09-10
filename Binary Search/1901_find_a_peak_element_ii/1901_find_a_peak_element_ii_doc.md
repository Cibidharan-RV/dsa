# [1901. Find a Peak Element II](https://leetcode.com/problems/find-a-peak-element-ii/)

## Date
2026-09-10

## Difficulty
Medium

## Topics
- Array
- Binary Search
- Matrix

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/find-a-peak-element-ii/submissions/2137567515)

Start from the top-left corner and perform hill climbing.
For the current cell,
Check each neighbor individually:
if a neighbor is greater, move to that neighbor.
If all four greater-than checks fail, the current cell is a peak,
so return its coordinates.
Since every move is strictly to a greater value, the traversal cannot cycle.

---

## Time Complexity

O(m * n)

## Space Complexity

O(1)

---

## Mistakes Made

- Initially used a separate condition to check whether the current cell was a peak.

---

## Similar Problems

- [Find Peak Element](https://leetcode.com/problems/find-peak-element/)
- [Find the Peaks](https://leetcode.com/problems/find-the-peaks/)

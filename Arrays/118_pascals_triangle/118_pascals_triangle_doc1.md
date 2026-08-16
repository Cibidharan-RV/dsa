# [118. Pascal's Triangle](https://leetcode.com/problems/pascals-triangle/)

## Date
2026-08-16

## Difficulty
Easy

## Topics
- Array
- Dynamic Programming

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/pascals-triangle/submissions/2109101013)

Build each row using the previous row. The first and last elements are always
1, while every element in between is the sum of the two elements directly
above it.

The main idea is:
> Each new row can be constructed from the previous row.

---

## Time Complexity

O(n^2)

## Space Complexity

O(n^2)

---

## Key Learning

- Use the previous row to construct the current row.
- First and last elements of every row are always 1.

---

## Mistakes Made

- Building the triangle row by row using the Pascal's Triangle recurrence.

---

## Similar Problems

- [Pascal's Triangle II](https://leetcode.com/problems/pascals-triangle-ii/)
- [Check If Digits Are Equal in String After Operations II](https://leetcode.com/problems/check-if-digits-are-equal-in-string-after-operations-ii/)

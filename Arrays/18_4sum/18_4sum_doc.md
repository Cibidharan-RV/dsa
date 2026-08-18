# [18. 4Sum](https://leetcode.com/problems/4sum/)

## Date
2026-08-18

## Difficulty
Medium

## Topics
- Array
- Two Pointers
- Sorting

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/4sum/submissions/2111174894)

Sort the array, then fix one element and proceed with 3sum with the elements on the right

For each `i` and `j`:
- Skip duplicate values to avoid duplicate quadruplets.
- Use the smallest and largest possible sums to prune impossible combinations.
- Use `l` and `r` to solve the remaining 2Sum problem.
- When a quadruplet is found, skip duplicate `l` and `r` values.

The main idea is:
> Fix two elements, reduce the remaining problem to 2Sum, and use sorting
  for two-pointer searching, duplicate handling, and pruning.

---

## Time Complexity

O(n^3)

## Space Complexity

O(1) auxiliary space

---

## Key Learning

- Use `long long` for sum calculations to avoid integer overflow.
- The array must be sorted for two pointers and pruning to work.
- If the smallest possible sum is already greater than the target, break.
- If the largest possible sum is still smaller than the target, continue.
- Skip duplicates at every fixed-pointer level.

---

## Mistakes Made

- used int for sum.

---

## Similar Problems

- [Two Sum](https://leetcode.com/problems/two-sum/)
- [3Sum](https://leetcode.com/problems/3sum/)
- [4Sum II](https://leetcode.com/problems/4sum-ii/)
- [Count Special Quadruplets](https://leetcode.com/problems/count-special-quadruplets/)

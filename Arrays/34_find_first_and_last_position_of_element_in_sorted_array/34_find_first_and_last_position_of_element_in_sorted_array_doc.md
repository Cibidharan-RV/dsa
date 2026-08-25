# [34. Find First and Last Position of Element in Sorted Array](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/)

## Date
2026-08-25

## Difficulty
Medium

## Topics
- Array
- Binary Search

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/submissions/2119617144)

Perform two binary searches:

- First search for the first position where `nums[mid] >= target`.
  This gives the first occurrence of `target`.
- Second search for the first position where `nums[mid] > target`.
  The position immediately before it gives the last occurrence of `target`.

If both resulting positions contain `target`, return them.
Otherwise, the target does not exist in the array, so return `{-1, -1}`.

The main idea is:

> Find the lower bound of `target` and the upper bound of `target`
> using two binary searches.

---

## Time Complexity

O(log n)

## Space Complexity

O(1)

---

## Similar Problems

- [First Bad Version](https://leetcode.com/problems/first-bad-version/)
- [Plates Between Candles](https://leetcode.com/problems/plates-between-candles/)
- [Find Target Indices After Sorting Array](https://leetcode.com/problems/find-target-indices-after-sorting-array/)

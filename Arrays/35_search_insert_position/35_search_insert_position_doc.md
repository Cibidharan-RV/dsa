# [35. Search Insert Position](https://leetcode.com/problems/search-insert-position/)

## Date
2026-08-25

## Difficulty
Easy

## Topics
- Array
- Binary Search

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/search-insert-position/submissions/2119567362)

Use binary search to find the first position whose value is greater than
or equal to `target`.

- If `nums[mid] >= target`, `mid` can be the answer, so store it and search
  the left half for an earlier valid position.
- If `nums[mid] < target`, the insertion position must be to the right of
  `mid`.
- Initialize `ans` to `nums.size()` because `target` may be greater than
  every element.

The final `ans` is the first index where `target` can be inserted while
maintaining sorted order.

---

## Time Complexity

O(log n)

## Space Complexity

O(1)

---

## Similar Problems

- [First Bad Version](https://leetcode.com/problems/first-bad-version/)
- [Minimum Operations to Exceed Threshold Value I](https://leetcode.com/problems/minimum-operations-to-exceed-threshold-value-i/)

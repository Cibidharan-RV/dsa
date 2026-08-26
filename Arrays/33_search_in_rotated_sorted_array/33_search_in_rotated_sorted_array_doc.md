# [33. Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/)

## Date
2026-08-26

## Difficulty
Medium

## Topics
- Array
- Binary Search

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/search-in-rotated-sorted-array/submissions/2120704132)

Use binary search on the rotated sorted array.

At every iteration, determine which half of the current search range is
sorted.

1. If `nums[l] < nums[mid]`, the left half is sorted.
   - If `target` lies between `nums[l]` and `nums[mid]`, search left.
   - Otherwise, search right.

2. Otherwise, the right half is sorted.
   - If `target` lies between `nums[mid]` and `nums[r]`, search right.
   - Otherwise, search left.

Since `nums[mid]` is already checked against `target`, it does not need to
be included again in the range checks.

The main idea is:

> Identify the sorted half, determine whether the target can belong to
> that half, and discard the other half.

---

## Time Complexity

O(log n)

## Space Complexity

O(1)

---

## Key Learning

- Binary search can still be used even when a sorted array has been rotated.
- At least one half of the current search range is always sorted.
- The sorted half can be identified by comparing `nums[l]` and `nums[mid]`.
- Once the sorted half is identified, checking whether the target lies
  within its value range determines which half can be discarded.
- The search range can therefore be reduced by roughly half at every step.

---

## Mistakes Made

- Initially tried to decide the search direction by comparing the target
  independently with the values at `l` and `r`.
- This failed because the endpoint values alone do not identify which side
  of the rotation is sorted.
- Initially used `nums[r]` as the upper bound when checking whether the
  target belongs to the left sorted half. The correct upper bound for that
  half is `nums[mid]`.
- could not solve this problem.

---

## Similar Problems

- [Search in Rotated Sorted Array II](https://leetcode.com/problems/search-in-rotated-sorted-array-ii/)
- [Find Minimum in Rotated Sorted Array](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/)
- [Pour Water Between Buckets to Make Water Levels Equal](https://leetcode.com/problems/pour-water-between-buckets-to-make-water-levels-equal/)

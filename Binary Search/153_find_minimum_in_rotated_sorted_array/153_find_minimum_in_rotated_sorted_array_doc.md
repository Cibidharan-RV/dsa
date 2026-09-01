# [153. Find Minimum in Rotated Sorted Array](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/)

## Date
2026-08-26

## Difficulty
Medium

## Topics
- Array
- Binary Search

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/submissions/2120861054)

The core idea is to always save the midpoint's value first as a safety net. Then, we use the sorted halves to decide where to search next:

1. If the left half is perfectly sorted: 
   - Look at the far right edge. If it's smaller than the left edge, the array is still rotated, so the true minimum is hiding on the right side.
   - Otherwise, it's a normal sorted array, so the smaller numbers are to the left.
2. If the left half is NOT sorted: 
   - The sudden "drop" (the true minimum) must be trapped inside this unsorted left half, so we search left.

---

## Time Complexity

O(log n)

## Space Complexity

O(1)

---

## Key Learning

- Recording the midpoint against the global minimum at the start of every loop allows you to safely use `mid - 1` and `mid + 1`. You never have to worry about skipping the minimum because you already recorded it!
- You can determine if a fully sorted sub-array is actually part of a larger rotation by comparing its ends: `nums[h] < nums[l]`.

---

## Mistakes Made

- Previously shifting the left pointer (`l = mid + 1`) when the left half was known to be unsorted. Correcting this to `h = mid - 1` ensures the algorithm actually chases the pivot drop.
- Getting bogged down by the syntax of chained comparisons (e.g., `a < b < c`) instead of relying on the structural properties of rotated arrays.

---

## Similar Problems

- [Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/)
- [Find Minimum in Rotated Sorted Array II](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/)

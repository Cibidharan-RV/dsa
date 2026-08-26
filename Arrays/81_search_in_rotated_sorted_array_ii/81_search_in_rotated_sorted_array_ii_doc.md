# [81. Search in Rotated Sorted Array II](https://leetcode.com/problems/search-in-rotated-sorted-array-ii/)

## Date
2026-08-26

## Difficulty
Medium

## Topics
- Array
- Binary Search

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/search-in-rotated-sorted-array-ii/submissions/2120742875)

Use binary search on the rotated sorted array with duplicates.

At each iteration:

1. Check whether `nums[mid]` is the target.
2. If `nums[l] == nums[mid] == nums[r]`, the ordering information is
   ambiguous because either side may contain the rotation point.
   In this case, linearly search the remaining left and right portions.
3. Otherwise, determine which half is sorted:
   - `nums[l] <= nums[mid]` → left half is sorted.
   - Otherwise → right half is sorted.
4. Check whether the target lies within the sorted half's value range.
   - If it does, continue searching that half.
   - Otherwise, search the other half.

The main idea is:

> Use binary search whenever the rotation gives enough ordering
> information; when duplicates make the ordering ambiguous, fall back
> to a linear search.

---

## Time Complexity

Average: O(log n)
Worst case: O(n)

## Space Complexity

O(1)

---

## Key Learning

- Binary search can be adapted to rotated sorted arrays.
- At least one half can normally be identified as sorted.
- Duplicates can make `nums[l]`, `nums[mid]`, and `nums[r]` equal, making
  the sorted half impossible to determine.
- In the ambiguous case, linear searching is necessary and leads to the
  O(n) worst-case complexity.
- The equality/ambiguity case must be handled before checking which half
  is sorted.

---

## Mistakes Made

- Initially assumed `nums[mid] == target` would handle the duplicate
  ambiguity, but `nums[l] == nums[mid] == nums[r]` can occur while the
  target is elsewhere.
- Initially omitted the case where `nums[l] == nums[mid]` but
  `nums[mid] != nums[r]`, causing the search bounds to remain unchanged
  and potentially creating an infinite loop.
- Initially tried to determine the search direction only from the target's
  relationship with the endpoints, which was insufficient for rotated
  arrays.

---

## Similar Problems

- [Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/)

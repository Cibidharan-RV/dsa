# [88. Merge Sorted Array](https://leetcode.com/problems/merge-sorted-array/)

## Date
2026-08-21

## Difficulty
Easy

## Topics
- Array
- Two Pointers
- Sorting

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/merge-sorted-array/submissions/2114912456)

Since both arrays are already sorted, compare their elements from the
back, where `nums1` has empty space.

- `i` points to the last valid element of `nums1`.
- `j` points to the last element of `nums2`.
- `k` points to the last position available in `nums1`.

Place the larger of `nums1[i]` and `nums2[j]` at `nums1[k]`, then move
the corresponding pointer backward.

Continue until one array is exhausted. If elements remain in `nums2`,
copy them into `nums1`.

The main idea is:

> Merge from right to left so that placing elements does not overwrite
> the unprocessed elements of `nums1`.

---

## Time Complexity

O(m+n)

## Space Complexity

O(1)

---

## Key Learning

- Merging two already sorted arrays using two pointers.
- Filling an array from the back can prevent overwriting unprocessed data.

---

## Mistakes Made

- nothing.

---

## Similar Problems

- [Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/)
- [Squares of a Sorted Array](https://leetcode.com/problems/squares-of-a-sorted-array/)
- [Interval List Intersections](https://leetcode.com/problems/interval-list-intersections/)
- [Take K of Each Character From Left and Right](https://leetcode.com/problems/take-k-of-each-character-from-left-and-right/)

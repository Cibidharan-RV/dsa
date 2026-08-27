# [540. Single Element in a Sorted Array](https://leetcode.com/problems/single-element-in-a-sorted-array/)

## Date
2026-08-27

## Difficulty
Medium

## Topics
- Array
- Binary Search

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/single-element-in-a-sorted-array/submissions/2121630777)

Use binary search based on the pair-position pattern.

In a valid array, every element except the single element appears exactly
twice. Before the single element, pairs occupy:

    even index → odd index

After the single element, this pairing pattern shifts:

    odd index → even index

Use `p` to determine which element should be paired with `mid`:

    p = 2 * (mid % 2)

    mid even → p = 0 → compare nums[mid] with nums[mid + 1]
    mid odd  → p = 2 → compare nums[mid - 1] with nums[mid]

If the expected pair exists at `mid`, the single element is to the right.
Otherwise, the single element is to the left.

Check the first and last elements separately because their expected pair
may lie outside the current search boundary.

The main idea is:

> Use the index parity of `mid` to determine whether its pair is correctly
> aligned. The point where this pairing pattern breaks is the single element.

---

## Time Complexity

O(log n)

## Space Complexity

O(1)

---

## Key Learning

- A sorted array with every element appearing twice has a predictable
  index-pair pattern.
- Before the single element, pairs start at even indices.
- After the single element, the pairing pattern shifts by one position.
- The parity of the middle index can therefore be used to determine the
  expected position of its pair.
- Boundary elements need to be checked separately because `mid - 1` or
  `mid + 1` may fall outside the array.

---

## Mistakes Made

- Initially accessed `nums[mid - 1]` and `nums[mid + 1]` without handling
  boundary indices, which could cause out-of-bounds access.
- Initially did not account for the possibility that the single element
  could become the current boundary during binary search.
- Used the pair-position parity to avoid explicitly checking both possible
  pair arrangements at every iteration.

---

## Similar Problems

- 

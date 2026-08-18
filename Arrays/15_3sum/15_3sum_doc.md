# [15. 3Sum](https://leetcode.com/problems/3sum/)

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

[View Submission on LeetCode](https://leetcode.com/problems/3sum/submissions/2110844716)

Sort the array first, then fix one element and use two pointers to find the
other two elements whose sum completes the triplet to zero.

For each `i`:
- Start `l` just after `i` and `r` at the end.
- If the sum is too small, move `l` right.
- If the sum is too large, move `r` left.
- If the sum is zero, store the triplet and skip duplicate values.
- Skip duplicate `i` values as well to avoid duplicate triplets.

The main idea is:
> Fix one number and use the sorted order with two pointers to find the other two.

---

## Time Complexity

O(n^2)

## Space Complexity

O(1) auxiliary space

---

## Key Learning

- Sorting allows the two pointers to decide which direction to move.
- Skip duplicate values for `i`, `l`, and `r`.
- The triplet is already sorted because the input is sorted.

---

## Mistakes Made

- Learned how sorting can reduce a three-element search from O(n^3) to O(n^2).
- Learned to handle duplicate triplets directly instead of using a set.

---

## Similar Problems

- [Two Sum](https://leetcode.com/problems/two-sum/)
- [3Sum Closest](https://leetcode.com/problems/3sum-closest/)
- [4Sum](https://leetcode.com/problems/4sum/)
- [3Sum Smaller](https://leetcode.com/problems/3sum-smaller/)
- [Number of Arithmetic Triplets](https://leetcode.com/problems/number-of-arithmetic-triplets/)
- [Minimum Sum of Mountain Triplets I](https://leetcode.com/problems/minimum-sum-of-mountain-triplets-i/)
- [Minimum Sum of Mountain Triplets II](https://leetcode.com/problems/minimum-sum-of-mountain-triplets-ii/)

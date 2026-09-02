# [1283. Find the Smallest Divisor Given a Threshold](https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/)

## Date
2026-09-02

## Difficulty
Medium

## Topics
- Array
- Binary Search

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/submissions/2128189724)

For a given divisor `divisor`, calculate the sum of the ceiling values of
`nums[i] / divisor`.

`calculateResultSum()` checks whether this sum is within the given `threshold`.

- If `result_sum <= threshold`, the divisor is valid.
- If `result_sum > threshold`, the divisor is too small, because a smaller
  divisor produces a larger sum.
- Stop immediately once `result_sum` exceeds `threshold`.

The possible divisor lies between `1` and the maximum element in `nums`.
Binary search this range to find the smallest divisor for which the
calculated sum is within the `threshold`.

Ceiling division is performed using:

`(num + divisor - 1) / divisor`

The main idea is:

> Binary search the divisor because increasing the divisor monotonically
> decreases the resulting sum.

---

## Time Complexity

O(n log M), where `M` is the maximum value in `nums`.

## Space Complexity

O(1)

---

## Key Learning

- Binary search can be applied to a numeric answer space when the
  feasibility condition is monotonic.
- A smaller divisor produces a larger sum, while a larger divisor produces
  a smaller sum.
- Ceiling division can be performed using integer arithmetic.
- The feasibility check can terminate early once `threshold` is exceeded.

---

## Mistakes Made

- No major mistakes.

---

## Similar Problems

- [Minimized Maximum of Products Distributed to Any Store](https://leetcode.com/problems/minimized-maximum-of-products-distributed-to-any-store/)

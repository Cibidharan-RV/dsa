# [152. Maximum Product Subarray](https://leetcode.com/problems/maximum-product-subarray/)

## Date
2026-08-24

## Difficulty
Medium

## Topics
- Array
- Dynamic Programming

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/maximum-product-subarray/submissions/2118291337)

For every position, keep two values:

- `maxp` — maximum product of a subarray ending at the current position.
- `minp` — minimum product of a subarray ending at the current position.

For the current number `x`, there are three possibilities:

1. Start a new subarray with `x`.
2. Extend the previous maximum product: `maxp * x`.
3. Extend the previous minimum product: `minp * x`.

The minimum is also needed because multiplying a negative number by the
minimum product can produce the new maximum.

Update both values using the old `minp` and `maxp`, then keep the largest
`maxp` found.

The main idea is:

> Keep both the maximum and minimum product ending at each position because
> a negative number can turn the minimum into the maximum.

---

## Time Complexity

O(n)

## Space Complexity

O(1)

---

## Key Learning

- Negative numbers can reverse the roles of the maximum and minimum.
- Always consider starting a new subarray with the current element.
- Keep the old `minp` and `maxp` before updating either one.

---

## Mistakes Made

- Initially tried using prefix products and dividing by the minimum prefix
  product, which fails because the required minimum must be for a subarray
  ending at the current position.
- Initially handled positive and negative numbers separately, but the same
  three candidates work for every element: `x`, `minp * x`, and `maxp * x`.

---

## Similar Problems

- [Maximum Subarray](https://leetcode.com/problems/maximum-subarray/)
- [House Robber](https://leetcode.com/problems/house-robber/)
- [Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/)
- [Maximum Product of Three Numbers](https://leetcode.com/problems/maximum-product-of-three-numbers/)
- [Subarray Product Less Than K](https://leetcode.com/problems/subarray-product-less-than-k/)

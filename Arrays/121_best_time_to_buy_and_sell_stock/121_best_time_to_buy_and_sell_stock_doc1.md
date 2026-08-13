# [121. Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)

## Date
2026-08-13

## Difficulty
Easy

## Topics
- Array
- Dynamic Programming

---

## Idea

[View Submission on LeetCode](https://leetcode.com/submissions/detail/2105325990/)

keep track of the minimum element seen so far and the maximum profit we can make so far.
Traverse the array from left to right.
For each element, calculate the profit if we sell at the current price (current price - minimum element seen so far).
Update the maximum profit if the current profit is greater than the maximum profit seen so far.
Update the minimum element if the current element is smaller than the minimum element seen so far.

---

## Time Complexity

O(n)

## Space Complexity

O(1)

---

## Key Learning

- similar to maximum subarray problem
---

## Mistakes Made

- nothing

---

## Similar Problems

- Maximum Subarray
- Best Time to Buy and Sell Stock II
- Best Time to Buy and Sell Stock III
- Best Time to Buy and Sell Stock IV
- Best Time to Buy and Sell Stock with Cooldown
- Sum of Beauty in the Array
- Maximum Difference Between Increasing Elements
- Maximum Profit From Trading Stocks
- Best Time to Buy and Sell Stock V

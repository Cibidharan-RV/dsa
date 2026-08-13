# [53. Maximum Subarray](https://leetcode.com/problems/maximum-subarray/)

## Difficulty
Medium

## Topic
- Arrays
- Dynamic Programming

---

## Idea

[View Submission on LeetCode](https://leetcode.com/submissions/detail/2102459454/)

keep track of the minimum prefix sum so far and the current prefix sum, the difference between them will give the sum subarray ending at the current index. 
Compare it with the maximum sum subarray found so far and update if necessary. 
If the minimum prefix sum found so far is greater than current prefix sum, update the minimum prefix sum.

---

## Time Complexity

O(n)

## Space Complexity

O(1)

---

## Key Learning

- store only needed information.

---

## Mistakes Made

- tried to use set to store all the seen pref sums. 
- later forgot the case that the minimum prefix sum can be 0, which i kept in first attempt.

---

## Similar Problems

- Best Time to Buy and Sell Stock
- Maximum Product Subarray
- Degree of an Array
- Longest Turbulent Subarray
- Maximum Score Of Spliced Array
- Maximum Absolute Sum of Any Subarray
- Maximum Subarray Sum After One Operation
- Substring With Largest Variance
- Count Subarrays With Score Less Than K
- Maximum Value of a String in an Array
- Find the Substring With Maximum Cost
- K Items With the Maximum Sum
- Maximum Good Subarray Sum
- Maximize Subarray Sum After Removing All Occurrences of One Element


## Date
2026-08-11

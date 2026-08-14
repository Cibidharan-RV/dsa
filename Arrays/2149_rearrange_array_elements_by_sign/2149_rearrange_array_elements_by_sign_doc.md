# [2149. Rearrange Array Elements by Sign](https://leetcode.com/problems/rearrange-array-elements-by-sign/)

## Date
2026-08-14

## Difficulty
Medium

## Topics
- Array
- Two Pointers
- Simulation

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/rearrange-array-elements-by-sign/submissions/2106506104)

Create a new array of same size as the `nums` and initiate two pointers for negative and positive
if the current number is negative insert into the odd  pointer, of the new array and increment the pointer to next odd position
do the same for positive number with even pointer. 
after traversing fully through the array, return the new array.

---

## Time Complexity

O(n)

## Space Complexity

O(n)

---

## Key Learning



---

## Mistakes Made



---

## Similar Problems

- Wiggle Subsequence
- Sort Array By Parity II
- Partition Array According to Given Pivot
- Largest Number After Digit Swaps by Parity

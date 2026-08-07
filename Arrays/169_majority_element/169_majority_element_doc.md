# [169. Majority Element](https://leetcode.com/problems/majority-element/)

## Difficulty
Easy

## Topic
- Arrays
- Hash Table

---

## Idea

Iterarte through the array, update freq for every element while iteration.
keep track of the number with highest freq in each iteration. 
if the frequency of the current number is greater than n/2, return it immediately.
else return the number with highest freq at the last.

[Click here to see the submission](https://leetcode.com/problems/majority-element/submissions/2097359925)

---

## Time Complexity

O(n) worst case
O(1) best case

## Space Complexity

O(n) hashmap

---

## Key Learning



---

## Mistakes Made



---

## Similar Problems

- Majority Element II
- Check If a Number Is Majority Element in a Sorted Array
- Most Frequent Even Element
- Minimum Index of a Valid Split
- Minimum Operations to Exceed Threshold Value I
- Find the Most Common Response
- Find Valid Pair of Adjacent Digits in String

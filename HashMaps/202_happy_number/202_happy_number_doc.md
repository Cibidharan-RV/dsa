# 202. Happy Number

## Difficulty
Easy

## Topic
- Hash Table
- Math
- Two Pointers
---

## Idea

[View Submission on LeetCode](https://leetcode.com/submissions/detail/2073571610/)
calculate the sum of sq of each digits of num and then `next num = sum of sq of current num` and proces this infinitely, while if num == 1 at some point return true, or if num comes back to a value it has been already (use the unordered_set) return false.
---

## Time Complexity

O(logN * d)

num of digits = log(n)
recursive calls before cycle ends = d

## Space Complexity

O(logN)

---

## Key Learning

- unordered_set for seen marking.
- hash maps takes time. 

---

## Mistakes Made

- Initially used hash map
- incorrect logic understanding from question.

---


## Date
2026-07-19

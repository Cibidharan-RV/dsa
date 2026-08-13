# 1. Two Sum

## Difficulty
Easy

## Topic
- Array
- Hash Map

---

## Idea

[View Submission on LeetCode](https://leetcode.com/submissions/detail/2096080741/)

Store previously seen numbers inside a hash map.

For every number:

- Find complement
- If complement exists -> answer found
- Otherwise store current number

---

## Time Complexity

O(n)

## Space Complexity

O(n)

---

## Key Learning

- Hash map for O(1) lookup
- Store values while iterating
- Search complement before insertion

---

## Mistakes Made

- stored current number before the check. 

---

## Similar Problems

- Two Sum II
- 4Sum
- Contains Duplicate

## Date
2026-08-06

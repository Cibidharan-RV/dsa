# 974. Subarray Sum Divisible by K

## Difficulty
Medium

## Topic
- Array
- Hash Table
- Prefix Sum

---

## Idea

[View Submission on LeetCode](https://leetcode.com/submissions/detail/2081912201/)

calculate the prefix sum and find the positive remainder and search for the number of occurances of the prefixes with the same remainder. add them, because the current element can form valid subarray with them. because they two have same remainder so their difference should be divisible by k.
increment to the frequency of the current presum to be matched with the future presums.
---

## Time Complexity

O(n)
` traversing through the array exactly once`

## Space Complexity

O(K) 
`vector of size K for storing the remainder freq`

---

## Key Learning

- Hash map for O(1) lookup
- Store values while iterating
- Search complement before insertion

---

## Mistakes Made

- Initially forgot duplicate case.
- Returned wrong indices.

---

## Similar Problems

- Two Sum II
- 4Sum
- Contains Duplicate

## Date
2026-07-26

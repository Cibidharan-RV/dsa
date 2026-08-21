# [2965. Find Missing and Repeated Values](https://leetcode.com/problems/find-missing-and-repeated-values/)

## Date
2026-08-21

## Difficulty
Easy

## Topics
- Array
- Hash Table
- Math
- Matrix

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/find-missing-and-repeated-values/submissions/2115000001)

Keep frequency of each number as `hash` and a vector `ans` of length 2, ans 2 `sum` and `summ` variables storing sum of the valid sequence and the given sequence respectively.
- If a number appears more than once store it in ans[0] immediately.
- And the missing number can be given by the formula `sum_of_first_n_numbers - (sum_of_array - repeated_number)`

---

## Time Complexity

O(n)

## Space Complexity

O(n)

---

## Key Learning

- use `#define` in order not to mistake the values of places.

---

## Mistakes Made

- mixed `0` and `1` places in `ans`.

---

## Similar Problems

- 

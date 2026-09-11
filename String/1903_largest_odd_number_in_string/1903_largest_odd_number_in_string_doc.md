# [1903. Largest Odd Number in String](https://leetcode.com/problems/largest-odd-number-in-string/)

## Date
2026-09-11

## Difficulty
Easy

## Topics
- Math
- String
- Greedy

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/largest-odd-number-in-string/submissions/2138841708)

Traverse the string from right to left to find the rightmost odd digit.
If no odd digit exists, no odd-valued substring can be formed, so return "".
Otherwise, erase everything after the rightmost odd digit and return the
remaining prefix, which is the largest possible odd number.

---

## Time Complexity

O(n)

## Space Complexity

O(1)

---

## Key Learning

- The parity of a decimal number depends only on its last digit.
- To maximize the odd substring, keep the longest prefix ending at the
  rightmost odd digit.

---

## Mistakes Made

- No major mistakes.

---

## Similar Problems

- [Largest 3-Same-Digit Number in String](https://leetcode.com/problems/largest-3-same-digit-number-in-string/)

# [1614. Maximum Nesting Depth of the Parentheses](https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/)

## Date
2026-09-14

## Difficulty
Easy

## Topics
- String
- Stack
- Bracket Sequences

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/submissions/2141210079)

Track the current parenthesis depth using open.
Increment open for every opening parenthesis and decrement it for every
closing parenthesis.
Before decreasing the depth at a closing parenthesis, compare open with
mx_open and keep the maximum depth encountered.

---

## Time Complexity

O(n)

## Space Complexity

O(1)

---

## Key Learning

- Parenthesis depth is represented by the number of currently unmatched
  opening parentheses.
- The maximum nesting depth can be found by tracking the maximum value of
  this counter.
- The depth at a closing parenthesis must be checked before decrementing
  the counter.

---

## Mistakes Made

- No major mistakes.

---

## Similar Problems

- [Maximum Nesting Depth of Two Valid Parentheses Strings](https://leetcode.com/problems/maximum-nesting-depth-of-two-valid-parentheses-strings/)

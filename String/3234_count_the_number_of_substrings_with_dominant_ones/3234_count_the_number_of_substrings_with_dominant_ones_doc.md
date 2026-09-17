# [3234. Count the Number of Substrings With Dominant Ones](https://leetcode.com/problems/count-the-number-of-substrings-with-dominant-ones/)

## Date
2026-09-17

## Difficulty
Medium

## Topics
- String
- Enumeration

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/count-the-number-of-substrings-with-dominant-ones/submissions/2144934846)

Precompute nextZero so nextZero[i] stores the position of the first zero
at or after index i.
For every starting index i, first count all substrings containing no zero.
Then process only the positions of consecutive zeros instead of checking every
possible ending position.
For each zero count, calculate the number of ones available and determine the
first ending position that satisfies the dominant-ones condition.
All valid ending positions before the next zero are counted together.
Stop when zeros * zeros exceeds the remaining substring length, because no
future substring can satisfy the condition.

---

## Time Complexity

O(n * sqrt(n))

## Space Complexity

O(n) $
 
$l
- Precomputing the next occurrence of zero allows the algorithm to jump
  directly between zero positions.
- Substrings containing no zero can be counted directly in O(1) for each
  starting position.
- For z zeros, the condition requires at least z^2 ones, which bounds the
  number of zero positions that need to be processed for each starting index.
- Counting a range of valid ending positions at once avoids checking every
  individual substring.

---

## Key Learning

- Precomputing the next occurrence of zero allows the algorithm to jump
  directly between zero positions.
- Substrings containing no zero can be counted directly in O(1) for each
  starting position.
- For z zeros, the condition requires at least z^2 ones, which bounds the
  number of zero positions that need to be processed for each starting index.
- Counting a range of valid ending positions at once avoids checking every
  individual substring.

---

## Mistakes Made

- Initially used direct O(n^2) enumeration of every substring.
- Initially used prefix frequency arrays, but the optimization still performed
  too much repeated work on large inputs such as an all-ones string.

---

## Similar Problems

- [Count Binary Substrings](https://leetcode.com/problems/count-binary-substrings/)

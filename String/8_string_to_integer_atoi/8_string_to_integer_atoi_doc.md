# [8. String to Integer (atoi)](https://leetcode.com/problems/string-to-integer-atoi/)

## Date
2026-09-14

## Difficulty
Medium

## Topics
- String

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/string-to-integer-atoi/submissions/2141284802)

Skip leading spaces and read the optional sign in the first loop.
When the first digit is found, initialize num and continue parsing digits
from that position onward in the second loop.
Use x to maintain the boundary between the already processed prefix and
the remaining characters.
While constructing the number, detect overflow and return INT_MAX for
positive overflow and INT_MIN for negative overflow.

---

## Time Complexity

O(n)

## Space Complexity

O(1)

---

## Key Learning

- Separating whitespace/sign handling from digit parsing removes the need
  for a state variable.
- Keeping x across both loops allows the second loop to continue from the
  correct position in the string.
- Using long long for num prevents intermediate integer overflow before
  checking against the 32-bit limits.

---

## Mistakes Made

- Initially used a state variable to distinguish between the parsing stages.
- Initially used ASCII comparisons without explicitly separating the
  different parsing stages.

---

## Similar Problems

- [Reverse Integer](https://leetcode.com/problems/reverse-integer/)
- [Valid Number](https://leetcode.com/problems/valid-number/)
- [Check if Numbers Are Ascending in a Sentence](https://leetcode.com/problems/check-if-numbers-are-ascending-in-a-sentence/)

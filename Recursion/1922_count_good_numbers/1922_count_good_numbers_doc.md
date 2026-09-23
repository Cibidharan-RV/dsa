# [1922. Count Good Numbers](https://leetcode.com/problems/count-good-numbers/)

## Date
2026-09-23

## Difficulty
Medium

## Topics
- Math
- Recursion

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/count-good-numbers/submissions/2151013454)

Separate the counting problem into two parts.
For n positions, every pair of positions contributes 20 choices, with one
additional factor of 5 when n is odd.
After extracting the odd position:
    result = 20^(n/2) * (5 if original n is odd, otherwise 1)

Calculate 20^(n/2) using recursive binary exponentiation.
Maintain result as the accumulated answer and base as the current power.
If the current exponent is odd, multiply result by base.
Then square base and halve the exponent.

---

## Time Complexity

O(log n)

## Space Complexity

O(log n) $

$l
- `n % 2` determines whether one extra position with 5 choices exists.
- Reducing n by its odd remainder allows the remaining positions to be
  grouped into pairs, each contributing 20 choices.
- Binary exponentiation avoids calculating 20^(n/2) one multiplication at a
  time.
- `result` stores the accumulated power while `base` stores the current power
  of 20.
- All multiplication is performed modulo 1000000007 to prevent overflow of the
  final result.
- The recursive implementation uses O(log n) call-stack space.

---

## Key Learning

- `n % 2` determines whether one extra position with 5 choices exists.
- Reducing n by its odd remainder allows the remaining positions to be
  grouped into pairs, each contributing 20 choices.
- Binary exponentiation avoids calculating 20^(n/2) one multiplication at a
  time.
- `result` stores the accumulated power while `base` stores the current power
  of 20.
- All multiplication is performed modulo 1000000007 to prevent overflow of the
  final result.
- The recursive implementation uses O(log n) call-stack space.

---

## Mistakes Made

- Initially tried to perform exponentiation using only one `ans` variable.
- This lost the distinction between the accumulated result and the current
  power being squared.
- Initially multiplied by 5 for every odd exponent inside `count()`, but the
  odd bit of binary exponentiation must contribute the current `base`.
- The final factor of 5 belongs specifically to the original problem's odd
  position, not to the exponentiation process.

---

## Similar Problems

- [Count the Number of Arrays with K Matching Adjacent Elements](https://leetcode.com/problems/count-the-number-of-arrays-with-k-matching-adjacent-elements/)

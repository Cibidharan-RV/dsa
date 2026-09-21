# [50. Pow(x, n)](https://leetcode.com/problems/powx-n/)

## Date
2026-09-21

## Difficulty
Medium

## Topics
- Math
- Recursion

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/powx-n/submissions/2148801930)

Binary exponentiation. Convert the exponent into binary implicitly by
repeatedly checking n % 2 and dividing n by 2. For each set bit, multiply
the current power of x into the accumulated result. Square x after each
iteration to generate x^2, x^4, x^8, ... . For negative exponents, invert
x first. The exponent is stored as long so Integer.MIN_VALUE can be safely
negated.

---

## Time Complexity

O(log |n|)

## Space Complexity

O(1) $

$l
- n % 2 determines whether the current binary bit is 1.
- n /= 2 moves to the next binary bit.
- x *= x generates successive powers of two.
- Use long for n because -Integer.MIN_VALUE cannot be represented by int.
- Inverting x before processing a negative exponent avoids a separate
  reciprocal operation at the end.

---

## Key Learning

- n % 2 determines whether the current binary bit is 1.
- n /= 2 moves to the next binary bit.
- x *= x generates successive powers of two.
- Use long for n because -Integer.MIN_VALUE cannot be represented by int.
- Inverting x before processing a negative exponent avoids a separate
  reciprocal operation at the end.

---

## Mistakes Made

- Initially recomputed x^i using a separate pow() call for every selected
  bit. This was O(log^2 n) instead of O(log n).
- Initially squared x before checking the current bit, causing the bit for
  x^1 to incorrectly multiply x^2.
- Tried to negate Integer.MIN_VALUE while n was still an int. Neither
  n *= (long)-1 nor casting the negated Integer.MIN_VALUE fixes the overflow,
  because the value must first be representable in the destination type.
- Tried to handle Integer.MIN_VALUE by changing x with x /= n and replacing
  n with Integer.MAX_VALUE. This changed the mathematical problem instead
  of merely fixing the exponent representation.
- Used an int loop variable i while the exponent could be 2147483648,
  creating another possible integer overflow.
- Considered removing ans by multiplying every generated power and dividing
  out powers corresponding to zero bits. This is mathematically possible,
  but it does not reduce O(1) space and introduces unnecessary floating-point
  division.

---

## Similar Problems

- [Sqrt(x)](https://leetcode.com/problems/sqrtx/)
- [Super Pow](https://leetcode.com/problems/super-pow/)
- [Count Collisions of Monkeys on a Polygon](https://leetcode.com/problems/count-collisions-of-monkeys-on-a-polygon/)

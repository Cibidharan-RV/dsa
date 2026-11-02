# [231. Power of Two](https://leetcode.com/problems/power-of-two/)

## Date
2026-11-02

## Difficulty
Easy

## Topics
- Math
- Bit Manipulation
- Recursion

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/power-of-two/submissions/2187800431)

- A **power of two** has exactly one set bit (`1`) in its binary representation.
- `n > 0` ensures that zero and negative numbers are excluded.
- The expression `n & (n - 1)` removes the rightmost set bit from `n`.
- If the number originally had exactly one set bit, removing it results in zero.
- Therefore, `(n & (n - 1)) == 0` confirms that `n` is a power of two.
- Both conditions must be true for the result to be `true`.

---

## Time Complexity

`O(1)` time. Only one bitwise operation is performed, regardless of the number of bits.

## Space Complexity

`O(1)` auxiliary space.

---

## Key Learning

- Every positive power of two has exactly one set bit in binary representation.
- `n & (n - 1)` is a useful technique for removing the rightmost set bit.
- Combining bitwise properties with boundary checks helps handle zero and negative numbers.

---

## Similar Problems

- [Number of 1 Bits](https://leetcode.com/problems/number-of-1-bits/)
- [Power of Three](https://leetcode.com/problems/power-of-three/)
- [Power of Four](https://leetcode.com/problems/power-of-four/)

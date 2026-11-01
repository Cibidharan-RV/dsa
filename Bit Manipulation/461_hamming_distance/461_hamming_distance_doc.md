# [461. Hamming Distance](https://leetcode.com/problems/hamming-distance/)

## Date
2026-11-01

## Difficulty
Easy

## Topics
- Bit Manipulation

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/hamming-distance/submissions/2186904059)

- Use **XOR** (`x ^ y`) to identify the bit positions where `x` and `y` differ.
- XOR produces `1` when the corresponding bits are different and `0` when they are equal.
- Apply **Brian Kernighan's Algorithm** to count the set bits in the XOR result.
- `k & (k - 1)` removes the rightmost set bit in each iteration.
- Each removed bit represents one differing position, so the final count gives the Hamming Distance.

---

## Time Complexity

`O(k)`, where k = number of set bits in `x ^ y`. At most 32 iterations.

## Space Complexity

`O(1)` auxiliary space.

---

## Key Learning

- **XOR identifies differences:** `a ^ b` produces set bits exactly at positions where the operands differ.
- **Bit counting:** Brian Kernighan's Algorithm counts only the set bits rather than checking every bit position.

---

## Similar Problems

- [Number of 1 Bits](https://leetcode.com/problems/number-of-1-bits/)
- [Total Hamming Distance](https://leetcode.com/problems/total-hamming-distance/)

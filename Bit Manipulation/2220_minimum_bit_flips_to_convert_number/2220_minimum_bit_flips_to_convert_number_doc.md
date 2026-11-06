# [2220. Minimum Bit Flips to Convert Number](https://leetcode.com/problems/minimum-bit-flips-to-convert-number/)

## Date
2026-11-06

## Difficulty
Easy

## Topics
- Bit Manipulation

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/minimum-bit-flips-to-convert-number/submissions/2190871417)

- Use **XOR** to identify the bit positions where `start` and `goal` differ.
- `start ^= goal` produces `1` at every position where the corresponding bits are different.
- Reset `goal` to zero and reuse it as the counter.
- Apply **Brian Kernighan's Algorithm** to count the set bits in the XOR result.
- `start & (start - 1)` removes the rightmost set bit in each iteration.
- Each set bit represents one required bit flip.
- When `start` becomes zero, the counter contains the minimum number of bit flips.

---

## Time Complexity

`O(k)`, where k = number of set bits in the XOR of `start` and `goal`. At most 32 iterations.

## Space Complexity

`O(1)` auxiliary space.

---

## Key Learning

- **XOR for difference detection:** `a ^ b` identifies all positions where two numbers have different bits.
- **Bit counting:** Brian Kernighan's Algorithm counts set bits by removing them one at a time.
- **Minimum bit flips:** The number of differing bit positions is exactly the number of flips required to transform one binary representation into another.

---

## Similar Problems

- [Minimum Flips to Make a OR b Equal to c](https://leetcode.com/problems/minimum-flips-to-make-a-or-b-equal-to-c/)
- [Minimum Number of Operations to Make Array XOR Equal to K](https://leetcode.com/problems/minimum-number-of-operations-to-make-array-xor-equal-to-k/)
- [Smallest Number With All Set Bits](https://leetcode.com/problems/smallest-number-with-all-set-bits/)

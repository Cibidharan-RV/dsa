# [342. Power of Four](https://leetcode.com/problems/power-of-four/)

## Date
2026-11-08

## Difficulty
Easy

## Topics
- Math
- Bit Manipulation
- Recursion

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/power-of-four/submissions/2192050952)

- A **power of four** must have exactly one set bit, and that bit must be at an even position (0, 2, 4, 6, ...).
- `n > 0` excludes zero and negative numbers.
- `(n & (n - 1)) == 0` verifies that `n` has exactly one set bit.
- `0x55555555` is a bitmask with set bits at every even position in its 32-bit representation.
- `(n & 0x55555555) != 0` verifies that the single set bit occurs at an even position.
- All three conditions together establish that `n` is a power of four.

---

## Time Complexity

`O(1)` time. Only a fixed number of bitwise operations are performed.

## Space Complexity

`O(1)` auxiliary space.

---

## Key Learning

- **Power of two:** Exactly one set bit is required.
- **Bitmask validation:** A bitmask can restrict valid set-bit positions without iteration.
- **Hexadecimal masks:** Hexadecimal notation provides a compact way to represent fixed binary patterns.

---

## Similar Problems

- [Power of Two](https://leetcode.com/problems/power-of-two/)
- [Power of Three](https://leetcode.com/problems/power-of-three/)

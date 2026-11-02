# [190. Reverse Bits](https://leetcode.com/problems/reverse-bits/)

## Date
2026-11-02

## Difficulty
Easy

## Topics
- Divide and Conquer
- Bit Manipulation

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/reverse-bits/submissions/2187811106)

- Process exactly **32 bits** because Java's `int` uses a fixed 32-bit representation.
- Extract the rightmost bit of `n` using `n & 1`.
- Shift `ans` left by one position to make room for the extracted bit.
- Insert the extracted bit into `ans` using bitwise OR.
- Perform an unsigned right shift (`n >>>= 1`) to move to the next bit.
- Repeat 32 times so that all bits, including leading zeros, are reversed.
- The final `ans` contains the reversed 32-bit representation.

---

## Time Complexity

`O(1)` time. Exactly 32 iterations.

## Space Complexity

`O(1)` auxiliary space.

---

## Key Learning

- **Unsigned right shift (`>>>`)** fills the vacant leftmost bits with zeros, avoiding sign extension.
- **Bitwise OR (`|`)** inserts an extracted bit into the result without affecting existing set bits.
- Always process the full bit width when a problem requires reversing a fixed-width integer representation.

---

## Similar Problems

- [Reverse Integer](https://leetcode.com/problems/reverse-integer/)
- [Number of 1 Bits](https://leetcode.com/problems/number-of-1-bits/)
- [A Number After a Double Reversal](https://leetcode.com/problems/a-number-after-a-double-reversal/)

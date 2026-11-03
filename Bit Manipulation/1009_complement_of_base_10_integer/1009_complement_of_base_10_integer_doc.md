# [1009. Complement of Base 10 Integer](https://leetcode.com/problems/complement-of-base-10-integer/)

## Date
2026-11-03

## Difficulty
Easy

## Topics
- Bit Manipulation

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/complement-of-base-10-integer/submissions/2188630399)

- The goal is to construct a **bitmask** containing all `1`s up to the most significant set bit of `n`.
- Use **bit spreading** to propagate the most significant set bit towards the right.
- Apply successive right shifts and bitwise OR operations:
  - `n |= n >> 1`
  - `n |= n >> 2`
  - `n |= n >> 4`
  - `n |= n >> 8`
  - `n |= n >> 16`
- After these operations, every bit from the least significant position up to the most significant set bit becomes `1`.
- This produces the required complement mask without explicitly calculating the position of the most significant set bit.
- XOR the original number with this mask to obtain its complement.
- Handle `n == 0` separately because its complement is `1`.

---

## Time Complexity

`O(1)` time. Five fixed bitwise operations, independent of the input value.

## Space Complexity

`O(1)` auxiliary space. Only a fixed number of variables are used.

---

## Key Learning

- **Bit spreading:** Successive right shifts combined with OR propagate set bits towards lower positions.
- **Bitmask construction:** A mask of consecutive set bits can be generated without explicitly finding the most significant set bit.
- **XOR for complement:** XOR with a mask of `1`s toggles the corresponding bits.
- **Fixed-width optimization:** For a 32-bit integer, shifts by 1, 2, 4, 8 and 16 are sufficient to spread the bits.

---

## Similar Problems

- 

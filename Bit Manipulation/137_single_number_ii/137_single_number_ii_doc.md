# [137. Single Number II](https://leetcode.com/problems/single-number-ii/)

## Date
2026-11-09

## Difficulty
Medium

## Topics
- Array
- Bit Manipulation

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/single-number-ii/submissions/2192622196)

- Use **bit counting with modulo 3** to identify the number that appears only once.
- Every other number appears exactly three times, so its set bits contribute a multiple of three to each bit position.
- Iterate through all 32 bit positions independently.
- For each position:
  - Count the number of set bits across all array elements using `(num >>> i) & 1`.
  - Take the count modulo 3 to eliminate contributions from numbers appearing three times.
  - If the remainder is non-zero, set that bit in the answer using `ans |= (1 << i)`.
- After processing all 32 positions, `ans` contains the number that appears exactly once.
- Using unsigned right shift (`>>>`) ensures correct bit extraction even for negative integers.

---

## Time Complexity

`O(32 * n) = O(n)`, where n = number of elements in the array. All 32 bit positions are checked for every element.

## Space Complexity

`O(1)` auxiliary space. Only a fixed number of variables are used.

---

## Key Learning

- **Bitwise frequency counting:** Count set bits independently at each position instead of counting complete numbers.
- **Modulo cancellation:** When repeated elements appear three times, their contribution at every bit position disappears modulo 3.
- **Bit reconstruction:** Build the answer by setting individual bits whose frequency remainder is non-zero.
- **Fixed-width integers:** Java `int` uses 32 bits, so all 32 positions must be considered, including the sign bit.

---

## Similar Problems

- [Single Number](https://leetcode.com/problems/single-number/)
- [Single Number III](https://leetcode.com/problems/single-number-iii/)
- [Find the XOR of Numbers Which Appear Twice](https://leetcode.com/problems/find-the-xor-of-numbers-which-appear-twice/)

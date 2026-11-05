# [268. Missing Number](https://leetcode.com/problems/missing-number/)

## Date
2026-11-05

## Difficulty
Easy

## Topics
- Array
- Hash Table
- Math
- Binary Search
- Bit Manipulation
- Sorting

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/missing-number/submissions/2190244058)

- Use the **XOR properties** to find the missing number from the range `0` to `nums.length`.
- XOR of a number with itself becomes `0`, and XOR with `0` leaves the number unchanged.
- Initialize `rem` using the XOR result of all numbers in the complete range from `0` to `n`, using the repeating pattern based on `n % 4`.
  - Remainder `0`: XOR result is `n`.
  - Remainder `1`: XOR result is `1`.
  - Remainder `2`: XOR result is `n + 1`.
  - Remainder `3`: XOR result is `0`.
- If `n % 4 == 0`, the implementation explicitly assigns `n` to `rem`.
- XOR every element of the input array with `rem`.
- All numbers appearing in both the expected range and the array cancel out, leaving only the missing number.

---

## Time Complexity

`O(n)`, where n = length of the input array. Each array element is processed once.

## Space Complexity

`O(1)` auxiliary space. Only a fixed number of variables are used, excluding the input array.

---

## Key Learning

- **XOR cancellation:** `a ^ a = 0` and `a ^ 0 = a`.
- **XOR range pattern:** XOR of consecutive integers from `0` to `n` follows a repeating four-case pattern based on `n % 4`.
- **Missing element detection:** XORing the expected range with the actual array cancels all matching elements, leaving the missing value.

---

## Similar Problems

- [First Missing Positive](https://leetcode.com/problems/first-missing-positive/)
- [Single Number](https://leetcode.com/problems/single-number/)
- [Find the Duplicate Number](https://leetcode.com/problems/find-the-duplicate-number/)
- [Couples Holding Hands](https://leetcode.com/problems/couples-holding-hands/)
- [Find Unique Binary String](https://leetcode.com/problems/find-unique-binary-string/)
- [Find the Largest Almost Missing Integer](https://leetcode.com/problems/find-the-largest-almost-missing-integer/)

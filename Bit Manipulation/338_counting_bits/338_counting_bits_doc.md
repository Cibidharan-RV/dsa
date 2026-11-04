# [338. Counting Bits](https://leetcode.com/problems/counting-bits/)

## Date
2026-11-04

## Difficulty
Easy

## Topics
- Dynamic Programming
- Bit Manipulation

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/counting-bits/submissions/2189559486)

- Use **Dynamic Programming (DP)** to calculate the number of set bits for every integer from `0` to `n`.
- Maintain `sub` as the largest power of two that is less than or equal to the current number.
- Whenever `i` reaches the next power of two (`sub * 2`), update `sub = i`.
- Every number in the current power-of-two range can be represented as `sub + offset`.
- The number of set bits in `i` is therefore `dp[i - sub] + 1`, because `sub` contributes one additional set bit.
- Since `i - sub` is always smaller than `i`, its result has already been calculated.
- `dp[0]` is initialized to zero and serves as the base case.

---

## Time Complexity

`O(n)` time, where n = the given upper limit. Each integer is processed exactly once.

## Space Complexity

`O(n)` auxiliary space for the DP array of size `n + 1`.

---

## Key Learning

- **DP using previously computed states:** Derive the current answer from an already calculated smaller state.
- **Power-of-two ranges:** Every number between consecutive powers of two can be represented as the current power of two plus an offset.
- **Offset-based recurrence:** Adding a power of two introduces exactly one additional set bit when the offset is smaller than that power of two.

---

## Similar Problems

- [Number of 1 Bits](https://leetcode.com/problems/number-of-1-bits/)
- [Sum of Values at Indices With K Set Bits](https://leetcode.com/problems/sum-of-values-at-indices-with-k-set-bits/)
- [Find the K-or of an Array](https://leetcode.com/problems/find-the-k-or-of-an-array/)

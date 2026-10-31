# [191. Number of 1 Bits](https://leetcode.com/problems/number-of-1-bits/)

## Date
2026-10-31

## Difficulty
Easy

## Topics
- Divide and Conquer
- Bit Manipulation

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/number-of-1-bits/submissions/2186348954)

- Use **Brian Kernighan's Algorithm** to count set bits efficiently.
- The expression `n & (n - 1)` removes the rightmost set bit (rightmost `1`) from `n`.
- Each iteration removes exactly one set bit and increments the counter.
- Repeat until `n == 0`, meaning all set bits have been counted.
- Therefore, the number of iterations equals the number of set bits.

---

## Time Complexity

`O(k)`, where k = number of set bits in n.

## Space Complexity

`O(1)` auxiliary space.

---

## Similar Problems

- [Reverse Bits](https://leetcode.com/problems/reverse-bits/)
- [Power of Two](https://leetcode.com/problems/power-of-two/)
- [Counting Bits](https://leetcode.com/problems/counting-bits/)
- [Binary Watch](https://leetcode.com/problems/binary-watch/)
- [Hamming Distance](https://leetcode.com/problems/hamming-distance/)
- [Binary Number with Alternating Bits](https://leetcode.com/problems/binary-number-with-alternating-bits/)
- [Prime Number of Set Bits in Binary Representation](https://leetcode.com/problems/prime-number-of-set-bits-in-binary-representation/)
- [Convert Date to Binary](https://leetcode.com/problems/convert-date-to-binary/)

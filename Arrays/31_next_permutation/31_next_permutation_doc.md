# [31. Next Permutation](https://leetcode.com/problems/next-permutation/)

## Date
2026-08-15

## Difficulty
Medium

## Topics
- Array
- Two Pointers

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/next-permutation/submissions/2107252750)

Find the first position from the right where the next element is larger. This is the position we need to increase.

Then:

1. Find the **smallest element greater than** the current element in the right-side portion.
2. Swap them.
3. Sort everything after that position in ascending order to make the remaining part as small as possible.
4. If the entire array is in descending order, reverse it to get the smallest permutation.

```text
Example:

[2, 3, 1, 3, 3]
       ↑
     pivot

Swap 1 with the smallest greater element:

[2, 3, 3, 1, 3]

Sort the suffix:

[2, 3, 3, 1, 3]
```

The main idea is:

> **Increase the rightmost possible position by the smallest amount, then minimize everything after it.**

---

## Time Complexity

`O(n log n)` — because of sorting the suffix.

## Space Complexity

`O(1)` auxiliary space.

---

## Key Learning

- how sorting an array works, the next number. similar to normal number system.
- understand the problem properly using a paper pen, should not just draw in mind

---

## Mistakes Made

- used testcases to find the pattern, how does the series goes on instead of trying to find how it will come.

---

## Similar Problems

- [Permutations](https://leetcode.com/problems/permutations/)
- [Permutations II](https://leetcode.com/problems/permutations-ii/)
- [Permutation Sequence](https://leetcode.com/problems/permutation-sequence/)
- [Palindrome Permutation II](https://leetcode.com/problems/palindrome-permutation-ii/)
- [Minimum Adjacent Swaps to Reach the Kth Smallest Number](https://leetcode.com/problems/minimum-adjacent-swaps-to-reach-the-kth-smallest-number/)

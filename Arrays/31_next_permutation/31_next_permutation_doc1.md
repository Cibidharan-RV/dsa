# [31. Next Permutation](https://leetcode.com/problems/next-permutation/)

## Date
2026-08-17

## Difficulty
Medium

## Topics
- Array
- Two Pointers

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/next-permutation/submissions/2109561598)

Find the first position from the right where the next element is larger whose index is anchor `anc`. This is the position we need to increase.

Then:

1. Find the **rightmost smallest element greater than** the `nums[anc]` in its suffix.
2. Swap them.
3. Reverse the suffix as it is already in descending order reversing it will result in the smallest possible number.

```text
Example:

[2, 3, 1, 3, 3]
       ↑
     pivot

Swap 1 with the rightmost smallest greater element:

[2, 3, 3, 3, 1]

reverse the suffix:

[2, 3, 3, 1, 3]
```

The main idea is:

> **Increase the rightmost possible position by the smallest amount, then minimize everything after it.**
*Note: This is imporvised solution from my O(n logn) solution while revision**

---

## Time Complexity

`O(n)`

## Space Complexity

`O(1)`

---

## Key Learning

- how the next number of a number system is built.
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

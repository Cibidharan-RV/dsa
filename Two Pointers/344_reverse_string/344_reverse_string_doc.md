# [344. Reverse String](https://leetcode.com/problems/reverse-string/)

## Date
2026-09-25

## Difficulty
Easy

## Topics
- Two Pointers
- String

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/reverse-string/submissions/2152524881)

Uses two pointers to reverse the character array in place.

`start` begins at the first index and `end` at the last index. On each iteration, the characters at these positions are swapped, then both pointers move toward the center.

The process stops when `start >= end`, meaning every required pair has been swapped.

This iterative approach performs the same work as the recursive version without creating recursive stack frames.

---

## Time Complexity

O(n)

## Space Complexity

O(1) auxiliary space.

---

## Key Learning

- The array is reversed in place, so no additional array is required.
- Only `n / 2` character pairs need to be swapped.
- The iterative version has the same asymptotic time complexity as the recursive version, but avoids recursion-stack overhead.
- The recursive version uses `O(n)` auxiliary stack space, while this version uses `O(1)`.

---

## Mistakes Made

- The recursive approach was correct, but it introduced recursion-stack overhead without providing an algorithmic advantage for this problem.
- Replaced recursion with two-pointer iteration to achieve `O(1)` auxiliary space.

---

## Similar Problems

- [Reverse Vowels of a String](https://leetcode.com/problems/reverse-vowels-of-a-string/)
- [Reverse String II](https://leetcode.com/problems/reverse-string-ii/)

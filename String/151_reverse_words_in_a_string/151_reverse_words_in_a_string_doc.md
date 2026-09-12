# [151. Reverse Words in a String](https://leetcode.com/problems/reverse-words-in-a-string/)

## Date
2026-09-12

## Difficulty
Medium

## Topics
- Two Pointers
- String

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/reverse-words-in-a-string/submissions/2139444359)

First normalize the string in-place using read and write pointers.
Skip leading spaces, collapse consecutive spaces into a single space, and
remove a trailing space if one remains.
Then reverse each individual word in-place.
Finally, reverse the entire string, which reverses the word order while
restoring the characters of every word.

---

## Time Complexity

O(n)

## Space Complexity

O(1)

---

## Key Learning

- Read/write pointers can remove unwanted characters in-place without the
  shifting cost of repeated erase() operations.
- Reversing every word followed by reversing the entire string reverses the
  order of the words while preserving each word's original spelling.

---

## Mistakes Made

- Initially used repeated erase() calls to remove consecutive spaces, which
  could make the space-cleaning step O(n^2).

---

## Similar Problems

- [Reverse Words in a String II](https://leetcode.com/problems/reverse-words-in-a-string-ii/)

# [796. Rotate String](https://leetcode.com/problems/rotate-string/)

## Date
2026-09-13

## Difficulty
Easy

## Topics
- String
- String Matching

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/rotate-string/submissions/2140325232)

First check that both strings have the same length, since a rotation cannot
change the number of characters.
Treat every position in s containing goal[0] as a possible starting point.
For each candidate position, compare goal with the corresponding characters
of s using modulo to wrap around when reaching the end of s.
If every character matches, the strings are rotations of each other.

---

## Time Complexity

O(n^2)

## Space Complexity

O(1)

---

## Key Learning

- A rotation can be represented by choosing a different starting position
  while preserving the circular order of the characters.
- Modulo allows the comparison to wrap from the end of s back to its beginning.
- Only positions matching goal[0] need to be considered as candidate starts.

---

## Mistakes Made

- No major mistakes.

---

## Similar Problems

- 

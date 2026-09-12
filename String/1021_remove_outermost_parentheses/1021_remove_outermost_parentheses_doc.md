# [1021. Remove Outermost Parentheses](https://leetcode.com/problems/remove-outermost-parentheses/)

## Date
2026-09-12

## Difficulty
Easy

## Topics
- String
- Stack
- Bracket Sequences

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/remove-outermost-parentheses/submissions/2139325216)

Process the string in-place using a read index i and a write index k.
isopen identifies whether the current primitive group has started, while
nopen tracks the number of currently open inner parentheses.
The outermost opening and closing parentheses are skipped.
Every inner parenthesis is written directly into the beginning of s.
Finally, resize s to the number of retained characters.

---

## Time Complexity

O(n)

## Space Complexity

O(1)

---

## Key Learning

- A read/write index can modify the original string without requiring an
  additional output string.
- The outermost parentheses of each primitive group are identified by the
  primitive-group state and nesting count.
- Resizing once at the end avoids the repeated shifting caused by erase().

---

## Mistakes Made

- Initially used erase(), which can make the solution O(n^2) due to repeated
  character shifting.

---

## Similar Problems

- 

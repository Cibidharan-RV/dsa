# [22. Generate Parentheses](https://leetcode.com/problems/generate-parentheses/)

## Date
2026-09-22

## Difficulty
Medium

## Topics
- String
- Dynamic Programming
- Backtracking
- Bracket Sequences

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/generate-parentheses/submissions/2149535704)

Generate all valid parenthesis sequences using backtracking.

At every position:
- Add '(' if fewer than n opening parentheses have been used.
- Add ')' only if the number of opening parentheses is greater than
  the number of closing parentheses, ensuring the current prefix remains valid.
- When the string reaches length 2n, store a copy of it in the answer list.

The same StringBuilder is reused for every recursive branch. After returning
from recursion, the last appended character is removed to restore the previous
state before exploring the next branch.

---

## Time Complexity

O(C_n * n) where C_n = (1/(n+1)) * binom(2n,n) is the number of valid parenthesis sequences.

## Space Complexity

O(n) 
The O(n) space is auxiliary recursion depth plus the StringBuilder.
The returned result itself requires O(C_n * n) space and is not counted as
auxiliary space.

---

## Key Learning

- `ans` must be initialized with new ArrayList<>() before calling ans.add().
- `open < n` controls how many `'('` can still be placed.
- `open > close` prevents `')'` from making the current prefix invalid.
- `deleteCharAt()` backtracks the `StringBuilder` after each recursive call.
- `cur.toString()` creates an independent `String` snapshot before further
  modifications to the shared `StringBuilder`.

---

## Mistakes Made

- Initially declared ans without initializing it, causing a `NullPointerException`
  when `ans.add()` was reached.
- The recursive state must be restored after each branch because the same
  StringBuilder is shared across all recursive calls.

---

## Similar Problems

- [Letter Combinations of a Phone Number](https://leetcode.com/problems/letter-combinations-of-a-phone-number/)
- [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)
- [Check if a Parentheses String Can Be Valid](https://leetcode.com/problems/check-if-a-parentheses-string-can-be-valid/)

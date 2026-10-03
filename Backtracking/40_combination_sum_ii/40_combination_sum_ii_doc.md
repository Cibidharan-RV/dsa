# [40. Combination Sum II](https://leetcode.com/problems/combination-sum-ii/)

## Date
2026-10-03

## Difficulty
Medium

## Topics
- Array
- Backtracking

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/combination-sum-ii/submissions/2160764520)

Store the frequency of each candidate value so duplicate values are handled
through their available counts instead of generating duplicate combinations.
For each distinct value i, choose how many copies f of that value to use, from
0 up to the smaller of its frequency and the remaining target capacity.
After choosing f copies, recursively move to i + 1 so every value is considered
exactly once.
The target represents the remaining sum. When it becomes zero, the current
combination is complete and is added to the result.

---

## Time Complexity

O(d * product(f_i + 1))
where
`d` = number of distinct values
`f_i = freq of the `i`-th distinct value
`product()` = product of all the elements

## Space Complexity

O(d + n) $

$l
- A frequency array preserves duplicate values while allowing each possible
  multiplicity of a value to be considered exactly once.
- Treating target as the remaining sum makes target == 0 a direct terminal
  condition.
- `target / i` bounds how many copies of i can possibly be selected.
- Advancing from i to i + 1 ensures each distinct value is processed only once.
- `ensureCapacity()` avoids unnecessary internal ArrayList resizing when
  adding multiple copies of the same value.

---

## Key Learning

- A frequency array preserves duplicate values while allowing each possible
  multiplicity of a value to be considered exactly once.
- Treating target as the remaining sum makes target == 0 a direct terminal
  condition.
- `target / i` bounds how many copies of i can possibly be selected.
- Advancing from i to i + 1 ensures each distinct value is processed only once.
- `ensureCapacity()` avoids unnecessary internal ArrayList resizing when
  adding multiple copies of the same value.

---

## Mistakes Made

- Initially used an outer loop together with recursive advancement, which
  caused the same value ranges to be explored multiple times.
- Initially used recursive calls with the same i for the branch that skipped
  the current value, which caused infinite recursion.
- Initially maintained the accumulated sum; changed the state to represent
  the remaining target instead.
- Initially called the first recursive function with target = 0 instead of
  the actual target.

---

## Similar Problems

- [Combination Sum](https://leetcode.com/problems/combination-sum/)

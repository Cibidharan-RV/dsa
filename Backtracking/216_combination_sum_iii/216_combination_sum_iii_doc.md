# [216. Combination Sum III](https://leetcode.com/problems/combination-sum-iii/)

## Date
2026-10-04

## Difficulty
Medium

## Topics
- Array
- Backtracking

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/combination-sum-iii/submissions/2161845306)

Use include/exclude backtracking over the numbers `1` to `9`.

At each `i`:
- Include `i`: add it to `comb` and reduce `rem` by `i`.
- Exclude `i`: skip it and keep `rem` unchanged.
- Both branches continue with `i + 1`, so each number is used at most once.

A combination is added only when:
- `comb.size() == k`
- `rem == 0`

The condition `i > rem` prunes the branch because all remaining
candidates are positive and cannot produce the required sum.

---

## Time Complexity

`O(2^9 * k)`

The search explores the include/exclude tree over the 9 candidates.
Copying each valid combination takes `O(k)`.

## Space Complexity

`O(9)` auxiliary space for the recursion stack and current combination.

Since the candidate set is fixed to `1..9`, this is `O(1)` with
respect to the input values.

The returned combinations are excluded.

---

## Key Learning

- **Include/exclude recursion** is useful when each candidate has
  two choices: select it or skip it.

- Advancing to `i + 1` in both branches enforces
*use-at-most-once** without a visited array.

- When all candidates are positive, `i > rem` provides valid
*target-based pruning**.

- A copied combination is required when storing an answer because
  `comb` is mutated during backtracking.

---

## Similar Problems

- [Combination Sum](https://leetcode.com/problems/combination-sum/)

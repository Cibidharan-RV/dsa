# [39. Combination Sum](https://leetcode.com/problems/combination-sum/)

## Date
2026-09-30

## Difficulty
Medium

## Topics
- Array
- Backtracking

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/combination-sum/submissions/2158438145)

Generate all unique combinations of `candidates` whose elements sum to
`target` using recursive backtracking.

At each candidate index `idx`, there are two choices:
- **Include `candidates[idx]`**: keep `idx` unchanged because the same candidate can be
  selected unlimited times.
- **Exclude `candidates[idx]`**: move to `idx + 1` and consider the next candidate.

When `sum == target`, the current sequence is a valid combination, so a copy
is added to `combs` and recursion stops for that branch.

The condition `target - sum >= candidates[idx]` prevents selecting a candidate that would
make the sum exceed the target. When `candidates[idx]` exactly reaches the remaining
target, the recursion moves directly to `idx + 1` because using the same
candidate again cannot produce another valid combination.

After the include branch returns, the selected element is removed from `seq`
to restore the state before exploring the exclude branch.

Because the recursion always moves forward when excluding a candidate, the
same combination is generated in only one order.

---

## Time Complexity

Let `S` be the total number of generated combinations and `L` their average length.
Time is **O(S · L)** for constructing/copying the output, plus recursive exploration.

## Space Complexity

Auxiliary space is **O(T + L)**, where `T` is recursion depth and `L` is the current sequence.
The returned result requires **O(S · L)** space.

---

## Key Learning

- The recursive state only needs `idx`, `sum`, and `seq`; the removed `check` flag
  was redundant because `sum == target` completely determines whether a
  combination is valid.
- Keeping `idx` unchanged in the include branch models **unlimited reuse** of the
  current candidate.
- Moving to `idx + 1` in the exclude branch prevents generating the same
  combination in different orders.
- The remaining-target check can prune a candidate before adding it because all
  candidates are positive.
- When a candidate exactly equals the remaining target, moving directly to
  `idx + 1` avoids one unnecessary recursive level.

---

## Similar Problems

- [Letter Combinations of a Phone Number](https://leetcode.com/problems/letter-combinations-of-a-phone-number/)
- [Combination Sum II](https://leetcode.com/problems/combination-sum-ii/)
- [Combinations](https://leetcode.com/problems/combinations/)
- [Combination Sum III](https://leetcode.com/problems/combination-sum-iii/)
- [Factor Combinations](https://leetcode.com/problems/factor-combinations/)
- [Combination Sum IV](https://leetcode.com/problems/combination-sum-iv/)
- [The Number of Ways to Make the Sum](https://leetcode.com/problems/the-number-of-ways-to-make-the-sum/)

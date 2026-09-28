# [77. Combinations](https://leetcode.com/problems/combinations/)

## Date
2026-09-28

## Difficulty
Medium

## Topics
- Backtracking

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/combinations/submissions/2156283067)

Generate all `k`-element combinations from the integers `1` through `N`
using recursive **include/exclude backtracking**.

At each value `n`, there are two choices:
- Include `n` in `cur`.
- Exclude `n` and continue with `n + 1`.

When `cur.size() == k`, a complete combination has been formed, so a copy
of `cur` is added to `coms`.

After exploring the include branch, `n` is removed from `cur` to restore the
previous state before considering the exclude branch.

The pruning condition

`N - n + 1 == k - cur.size()`

detects when the number of values still available is exactly equal to the
number of elements still required. In that situation, every remaining value
must be selected, so the exclude branch cannot produce a valid combination
and the function returns.

The recursion therefore explores only the necessary include/exclude choices
while avoiding branches that cannot produce another combination.

---

## Time Complexity

There are `C(N, k)` combinations, each containing `k` elements: **O(k · C(N, k))** time.
This matches the output-size lower bound.

## Space Complexity

Auxiliary space: **O(N)** for the recursion stack and backtracking state.
Result space: **O(k · C(N, k))** for the returned combinations.

---

## Similar Problems

- [Combination Sum](https://leetcode.com/problems/combination-sum/)
- [Permutations](https://leetcode.com/problems/permutations/)

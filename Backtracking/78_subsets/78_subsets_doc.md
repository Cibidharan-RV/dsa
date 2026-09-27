# [78. Subsets](https://leetcode.com/problems/subsets/)

## Date
2026-09-27

## Difficulty
Medium

## Topics
- Array
- Backtracking
- Bit Manipulation

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/subsets/submissions/2154857621)

Generate the power set using recursive **include/exclude backtracking**.

At each index `i`, there are exactly two choices for `nums[i]`:
- Include `nums[i]` in the current subset.
- Exclude `nums[i]` from the current subset.

After exploring the include branch, `nums[i]` is removed from `cur` to restore
the previous state before exploring the exclude branch.

When `i == n`, every element has been considered, so `cur` represents one
complete subset. A copy of it is added to `set`.

The recursion therefore explores a binary decision tree containing every
possible combination of elements.

---

## Time Complexity

There are `2^n` possible subsets, and each recursive branch represents one
include/exclude decision.

Each complete subset is copied into `set`, which can take up to `O(n)` time.
Therefore, the total time complexity is **O(n · 2^n)**.

This is asymptotically optimal when explicitly returning all subsets because
the output itself contains up to `2^n` subsets with up to `n` elements each.

`1 << n` calculates `2^n` directly using a bit shift and is used as the
initial capacity of `set`.

## Space Complexity

The recursion depth is `n`, and `cur` can contain at most `n` elements.
Therefore, the auxiliary space is **O(n)**.

The returned `set` requires **O(n · 2^n)** space and is excluded from the
auxiliary-space complexity.

---

## Key Learning

- The invariant is that `cur` contains exactly the elements selected from
  `nums[0 ... i-1]`.
- Every element has two choices: include or exclude.
- `cur.remove(cur.size() - 1)` performs the backtracking required before
  exploring the exclude branch.
- `new ArrayList<>(cur)` is necessary because `cur` is continuously modified
  during recursion; storing `cur` directly would store the same mutable list.
- `set = new ArrayList<>(1 << n)` preallocates capacity for all `2^n` subsets.

---

## Similar Problems

- [Subsets II](https://leetcode.com/problems/subsets-ii/)
- [Generalized Abbreviation](https://leetcode.com/problems/generalized-abbreviation/)
- [Letter Case Permutation](https://leetcode.com/problems/letter-case-permutation/)
- [Find Array Given Subset Sums](https://leetcode.com/problems/find-array-given-subset-sums/)
- [Count Number of Maximum Bitwise-OR Subsets](https://leetcode.com/problems/count-number-of-maximum-bitwise-or-subsets/)

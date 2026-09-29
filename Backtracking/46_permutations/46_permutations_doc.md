# [46. Permutations](https://leetcode.com/problems/permutations/)

## Date
2026-09-29

## Difficulty
Medium

## Topics
- Array
- Backtracking

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/permutations/submissions/2156582941)

Generate all permutations of `nums` using recursive backtracking.

At each recursion level, iterate through every index and choose any element
that has not already been used in the current permutation. The `used` array
tracks which elements are currently present in `curP`.

After choosing an element, mark it as used and recurse. Once the recursive
call returns, remove the element from `curP` and mark it unused so that it can
be selected by another branch.

When `curP.size() == nums.length`, one complete permutation has been formed,
so a copy of `curP` is added to `perm`.

The recursion explores all possible choices for each position, producing all
`n!` permutations.

---

## Time Complexity

There are `n!` permutations and copying each takes `O(n)`: **O(n · n!)** time.
This is optimal when explicitly returning all permutations.

## Space Complexity

Auxiliary space is **O(n)** for `used`, `curP`, and the recursion stack.
The returned result requires **O(n · n!)** space.

---

## Key Learning

- For permutation problems, the key distinction from subset/combinations is that
  after choosing an element, every other unused element remains a candidate for
  the next position; therefore, recursion should not simply advance through the
  input index.
- A `boolean[] used` provides a general O(1)-time mechanism for tracking whether
  an element is currently part of the recursive state.
- When the number of generated outputs is known beforehand, such as `n!` for
  permutations or `C(n,k)` for combinations, preallocating the result
  `ArrayList` can avoid repeated capacity growth.

---

## Similar Problems

- [Next Permutation](https://leetcode.com/problems/next-permutation/)
- [Permutations II](https://leetcode.com/problems/permutations-ii/)
- [Permutation Sequence](https://leetcode.com/problems/permutation-sequence/)
- [Combinations](https://leetcode.com/problems/combinations/)

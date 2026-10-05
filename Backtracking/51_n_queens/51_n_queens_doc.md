# [51. N-Queens](https://leetcode.com/problems/n-queens/)

## Date
2026-10-05

## Difficulty
Hard

## Topics
- Array
- Backtracking
- Algorithm X

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/n-queens/submissions/2163152040)

Use DFS backtracking to place exactly one queen in each row.

For the current row `y`, try every column `x`. A position is valid when
its column and both diagonals are unused. Track these constraints with
three boolean arrays:
- `cols[x]` for occupied columns
- `diag1[x + y]` for one diagonal direction
- `diag2[x - y + n - 1]` for the other diagonal direction

When a position is valid, mark its column and diagonals, add the
corresponding precomputed board row, and recurse to the next row.
After recursion, remove the row and undo all three constraint states so
the next column can be tried.

When `y == n`, every row has a queen, so the current board is copied
into the result.

The key invariant is that before processing row `y`, the board contains
exactly one valid queen in every previous row, and the three boolean
arrays describe exactly those placed queens.

---

## Time Complexity

`O(N! + S * N^2)`, where `N` is the board size and `S` is the number of
valid solutions. The backtracking search is bounded by `O(N!)`, while
copying all `S` returned boards costs `O(S * N^2)`.

## Space Complexity

`O(N)` auxiliary space for the three boolean arrays, recursion stack,
and current board. The returned solutions require additional
`O(S * N^2)` output space.

---

## Key Learning

- **Backtracking state should contain only information that future
  decisions need**; the row state is implicit because recursion
  processes exactly one row at a time.
- **Constraint tracking arrays** can turn repeated board scans into
  `O(1)` validity checks.
- The diagonal mappings `row + col` and `row - col + N - 1` convert
  diagonal membership into direct array lookups.
- The fundamental backtracking invariant is **place -> recurse ->
  undo**, restoring every piece of state before trying the next choice.
- Precomputing reusable representations can reduce **constant-factor
  overhead** without changing the underlying algorithm.
- The N-Queens solution was derived independently by progressively
  identifying the necessary state and eliminating redundant state,
  rather than following the editorial implementation.

---

## Similar Problems

- [N-Queens II](https://leetcode.com/problems/n-queens-ii/)
- [Grid Illumination](https://leetcode.com/problems/grid-illumination/)

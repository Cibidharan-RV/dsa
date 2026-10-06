# [37. Sudoku Solver](https://leetcode.com/problems/sudoku-solver/)

## Date
2026-10-06

## Difficulty
Hard

## Topics
- Array
- Hash Table
- Backtracking
- Matrix
- Algorithm X
- Dancing Links

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/sudoku-solver/submissions/2164129779)

Use backtracking to fill the Sudoku cell by cell in row-major order.

Maintain three constraint tables:
- `row[y][num]` tells whether a digit is already used in row `y`.
- `col[x][num]` tells whether a digit is already used in column `x`.
- `box[x / 3 + (y / 3) * 3][num]` tells whether a digit is already used in the corresponding 3x3 box.

First, initialize these tables using the digits already present on the board.

For every empty cell, try each digit from 1 to 9. `checkAndPlace` verifies the three constraints and places the digit when valid. Recursively solve the remaining cells. If that choice eventually leads to a dead end, `remove` restores the cell and all three constraint states so the next digit can be tried.

When `y == 9`, every cell has been successfully processed, so the Sudoku is solved.

The key invariant is: before processing the current cell, every previously processed cell forms a valid partial Sudoku, and the three constraint tables exactly represent the digits currently placed on the board.

---

## Time Complexity

`O(9^E)`, where `E` is the number of initially empty cells. Each state tries at most 9 digits, and each validity check uses three boolean lookups, which is constant time.

## Space Complexity

`O(1)` auxiliary space for the fixed 9 x 9 `row`, `col`, and `box` arrays, plus recursion depth of at most 81. The board itself is the input and is not counted as auxiliary space.

---

## Key Learning

- **Constraint-state arrays** can replace repeated scanning of related data, turning row, column, and box validity checks into constant-time lookups.
- The reusable backtracking pattern is **place -> recurse -> undo**: every state change made before recursion must be completely restored when that branch fails.
- A boolean return value can propagate a successful recursive solution directly upward, avoiding a separate global `found` flag.
- In Sudoku, the 3x3 boxes are **constraints rather than recursion units**; processing individual cells allows row, column, and box constraints to be checked simultaneously.
- The same constraint-tracking idea used in N-Queens can be transferred to other backtracking problems by identifying the constraints that future choices need to check.

---

## Mistakes Made

- Initially treating the position/index as the digit led to incorrect candidate generation; the recursive step must explicitly try digits `1` through `9`.
- When an empty cell has no valid digit, the correct action is to return `false` and backtrack; moving directly to the next row would incorrectly abandon the unresolved cell.
- An off-by-one error arose because the candidate index `i` represented digit `i + 1`; the board and validation logic must use the same digit representation consistently.

---

## Similar Problems

- [Valid Sudoku](https://leetcode.com/problems/valid-sudoku/)
- [Unique Paths III](https://leetcode.com/problems/unique-paths-iii/)

# [73. Set Matrix Zeroes](https://leetcode.com/problems/set-matrix-zeroes/)

## Date
2026-08-15

## Difficulty
Medium

## Topics
- Array
- Hash Table
- Matrix

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/set-matrix-zeroes/submissions/2107435678)

Use the first row and first column as markers instead of using extra arrays.

- When a zero is found, mark 0 in the corresponding first row and column.
- Keep separate flags for the first row and column because we are modifying it.
- After marking, zero the required rows and columns.
- Finally handle the first row and column using the flags.

The main idea is:
> Use the matrix itself to store which rows and columns need to be zeroed.

---

## Time Complexity

O(nrow × ncol)

## Space Complexity

O(1)

---

## Key Learning

- Use the matrix itself as extra storage.
- matrix[0][0] cannot represent both first row and first column.
- Mark first, modify later.
---

## Mistakes Made

- Initially used unordered_set for rows and columns.
- Changed to in-place marking to reduce space from O(nrow + ncol) to O(1).

---

## Similar Problems

- [Game of Life](https://leetcode.com/problems/game-of-life/)
- [Number of Laser Beams in a Bank](https://leetcode.com/problems/number-of-laser-beams-in-a-bank/)
- [Minimum Operations to Remove Adjacent Ones in Matrix](https://leetcode.com/problems/minimum-operations-to-remove-adjacent-ones-in-matrix/)
- [Remove All Ones With Row and Column Flips II](https://leetcode.com/problems/remove-all-ones-with-row-and-column-flips-ii/)

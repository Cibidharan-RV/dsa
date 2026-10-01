# [79. Word Search](https://leetcode.com/problems/word-search/)

## Date
2026-10-02

## Difficulty
Medium

## Topics
- Array
- String
- Backtracking
- Depth-First Search
- Matrix

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/word-search/submissions/2159605395)

Use DFS + backtracking to search for the word as a path through adjacent cells.

For each cell matching the first character, recursively try the four directions. The
state `(i, j, c)` represents the current cell and the index `c` of the character being
matched. Once a cell is used, mark it in-place by subtracting 26 so it cannot be reused
in the current path; restore it after exploring all directions.

When `c == word.length()`, the entire word has already been matched. The recursion
therefore succeeds immediately. If no path succeeds from any starting cell, return false.

---

## Time Complexity

O(RC * 3^L) $ worst-case, where `R*C` is the board size and `L` is `word.length()`.

## Space Complexity

O(L) $ auxiliary space for the recursion stack; in-place marking uses O(1) extra space.

---

## Key Learning

- This is the standard **grid DFS + backtracking** pattern: the recursive state contains both the current position and the progress through the target.
- After the first cell, the branching factor is at most 3 because the immediately previous cell cannot be reused.
- In-place marking can replace a separate `boolean[][] visited`, reducing auxiliary space from O(RC + L) to O(L).
- The termination condition must represent a completed match, not the need to find another cell: after matching the final character, the next recursive call receives `c == word.length()` and succeeds immediately.
- Backtracking requires restoring every temporary state change before returning so other candidate paths see the original board.
- The `-26` marking technique relies on the problem's character constraints; it is not a general-purpose visited mechanism for arbitrary board values.

---

## Similar Problems

- [Word Search II](https://leetcode.com/problems/word-search-ii/)

# [445. Add Two Numbers II](https://leetcode.com/problems/add-two-numbers-ii/)

## Date
2026-10-18

## Difficulty
Medium

## Topics
- Linked List
- Math
- Stack

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/add-two-numbers-ii/submissions/2175613560)

- The two numbers are represented in reverse digit order, so the least significant digit appears first.
- Compare the list lengths by advancing `d1` and `d2` together. If `l1` is shorter, swap the list roles so `ls1` refers to the longer list.
- Pad the shorter list with leading zero-valued nodes at its head until both lists have equal lengths. These extra nodes allow corresponding digits to be added recursively.
- The recursive `add` function reaches the end of both lists and returns zero. As recursion unwinds, it adds corresponding digits and the carry returned by the next recursive call.
- Store `value % 10` in the corresponding node of `l1` and return `value / 10` as the carry to the preceding digit.
- If a carry remains after processing the most significant digit, create a new head node containing that carry.
- Return `ls1`, which points to the resulting number. The implementation modifies the longer input list and may prepend padding nodes to the shorter list.

---

## Time Complexity

`O(n + m)`, where n and m are the lengths of the two input lists. Length alignment takes linear time, padding takes time proportional to the length difference, and recursive addition processes each aligned pair once.

## Space Complexity

`O(max(n, m))` auxiliary space for the recursive call stack. Padding also creates `O(max(n, m) - min(n, m))` nodes, which is additional allocated space.

---

## Key Learning

- **Recursion unwinding** can process digits from least significant to most significant when the recursive structure reaches the end first.
- Padding the shorter representation aligns corresponding digits and simplifies the recursive state.
- For decimal addition, store `value % 10` as the digit and propagate `value / 10` as the carry.
- Distinguish auxiliary space from newly allocated nodes when analyzing linked-list algorithms.

---

## Mistakes Made

- The base case checks only whether both nodes are null. This is safe only when the lists have been aligned to equal lengths and the recursion reaches their ends together.
- The implementation mutates the input lists, so callers should not expect the original lists to remain unchanged.
- The `System.out.println` statement is debugging output and should be removed from a submission.

---

## Similar Problems

- [Add Two Numbers](https://leetcode.com/problems/add-two-numbers/)
- [Add Two Polynomials Represented as Linked Lists](https://leetcode.com/problems/add-two-polynomials-represented-as-linked-lists/)

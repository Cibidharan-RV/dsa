# [25. Reverse Nodes in k-Group](https://leetcode.com/problems/reverse-nodes-in-k-group/)

## Date
2026-10-11

## Difficulty
Hard

## Topics
- Linked List
- Recursion

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/reverse-nodes-in-k-group/submissions/2168592934)

- The algorithm uses group-boundary pointer manipulation followed by one final reversal.
- Initialize `groupEnd` and `groupStart` at the head, where `groupEnd` locates the boundary of each group and `groupStart` tracks the group's starting node.
- Advance `groupEnd` by `k - 1` positions to reach the first group's kth node.
- For each group boundary:
  - Save the node after the boundary in `nextGroupStart`.
  - Redirect the boundary node's `next` pointer to `prevGroupStart`, linking it to the previously processed group.
  - Advance `groupEnd` to `nextGroupStart`, update `prevGroupStart` to the current group's starting node, and update `groupStart` to the next group's starting node.
  - Advance `groupEnd` to the next group boundary.
- After processing the boundaries, initialize `groupEnd` to `nextGroupStart` and `groupStart` to the beginning of the chain that must be reversed.
- Reverse the remaining links iteratively by saving `groupStart.next`, connecting `groupStart.next` to `groupEnd`, and advancing both pointers.
- Return `groupEnd`, which points to the head of the resulting list.

---

## Time Complexity

`O(n)`, where n = number of nodes. Group-boundary traversal and the final reversal each take linear time.

## Space Complexity

`O(1)` auxiliary space. The algorithm uses a constant number of node references and modifies the list in place.

---

## Key Learning

- Saving the node after a boundary before changing its link prevents losing access to the unprocessed list. - Existing node references can be reused after their previous roles are no longer needed. - Reversing links in place avoids allocating replacement nodes or an auxiliary data structure. - A linear-time algorithm can still traverse nodes more than once; asymptotic complexity depends on the total work across all passes.

---

## Similar Problems

- [Swap Nodes in Pairs](https://leetcode.com/problems/swap-nodes-in-pairs/)
- [Swapping Nodes in a Linked List](https://leetcode.com/problems/swapping-nodes-in-a-linked-list/)
- [Reverse Nodes in Even Length Groups](https://leetcode.com/problems/reverse-nodes-in-even-length-groups/)

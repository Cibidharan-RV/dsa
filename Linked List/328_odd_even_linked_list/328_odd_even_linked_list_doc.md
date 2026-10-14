# [328. Odd Even Linked List](https://leetcode.com/problems/odd-even-linked-list/)

## Date
2026-10-14

## Difficulty
Medium

## Topics
- Linked List

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/odd-even-linked-list/submissions/2172184445)

- The goal is to group nodes at odd positions first, followed by nodes at even positions, while preserving the relative order within each group.
- Find the last odd-position node by advancing `even` two links at a time. Set `oddEnd` to this node and identify the final even-position node as `eveEnd` when it exists.
- Use `odd` and `even` as moving pointers to rearrange links. In each iteration, connect `even.next` to the next odd-position node, then bypass the next even-position node from the odd chain.
- Advance both pointers after each rearrangement. Stop when `odd` reaches the last odd node or the node immediately before it.
- Finally, connect the last node of the odd chain to `eveEnd`, preserving the even-position chain, and return the original head.

---

## Time Complexity

`O(n)`, where n is the number of nodes. Finding the odd endpoint and rearranging links take linear time overall.

## Space Complexity

`O(1)` auxiliary space. The algorithm uses a fixed number of node references and rearranges the existing links without creating additional nodes.

---

## Key Learning

- Linked-list rearrangement can be performed in place by changing `next` references rather than copying nodes.
- Odd and even positions refer to **1-based node positions**, not the values stored in the nodes.
- Preserve the relative order of nodes within each group when rearranging a linked list.

---

## Mistakes Made

- The approach depends on correctly identifying the odd and even chain endpoints before rewiring links. Test lists of different lengths, especially three, four, and five nodes, to verify the loop boundaries and final connection.

---

## Similar Problems

- [Split Linked List in Parts](https://leetcode.com/problems/split-linked-list-in-parts/)
- [Transform Array by Parity](https://leetcode.com/problems/transform-array-by-parity/)

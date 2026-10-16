# [86. Partition List](https://leetcode.com/problems/partition-list/)

## Date
2026-10-16

## Difficulty
Medium

## Topics
- Linked List
- Two Pointers

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/partition-list/submissions/2173744271)

- Use two separate linked lists to partition the original list: one for nodes with values less than `x` and another for nodes with values greater than or equal to `x`.
- `small` and `big` are dummy head nodes. `s` and `b` track the tails of their respective lists.
- Traverse the original list using `cur`. Append each existing node to the appropriate list based on whether its value is less than `x`.
- Since nodes are appended in their original traversal order, the relative order within each partition is preserved.
- Connect the smaller partition to the larger partition using `s.next = big.next`.
- Set `b.next = null` to terminate the combined list and prevent stale links from creating an unintended cycle.
- Return `small.next` to skip the dummy head.

---

## Time Complexity

`O(n)`, where n is the number of nodes. Each node is processed exactly once, and each partition operation takes constant time.

## Space Complexity

`O(1)` auxiliary space because only a constant number of pointers and two dummy nodes are used. The original nodes are rearranged without creating replacement nodes for their values.

---

## Key Learning

- **Two-list partitioning** separates nodes into groups while preserving their relative order.
- Dummy head nodes simplify list construction by avoiding special handling for the first node in each partition.
- When reusing existing nodes, explicitly terminate the final list to prevent unintended links or cycles.

---

## Similar Problems

- [Partition Array According to Given Pivot](https://leetcode.com/problems/partition-array-according-to-given-pivot/)

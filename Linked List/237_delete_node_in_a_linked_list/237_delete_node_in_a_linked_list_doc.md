# [237. Delete Node in a Linked List](https://leetcode.com/problems/delete-node-in-a-linked-list/)

## Date
2026-09-18

## Difficulty
Medium

## Topics
- Linked List

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/delete-node-in-a-linked-list/submissions/2145594543)

The given node cannot be directly removed because the previous node is
unavailable.
Copy the value of the next node into the given node, then bypass the next
node by linking the current node to the node after it.

---

## Time Complexity

O(1)

## Space Complexity

O(1) $
 
$l
- The problem provides only the node to be deleted, not the head of the list.
- Therefore, the previous node cannot be accessed normally.
- Since the given node is guaranteed not to be the tail, node.next always
  exists.
- Copying the successor's value makes the current node represent the
  successor, and skipping node.next removes the successor from the chain.

---

## Key Learning

- The problem provides only the node to be deleted, not the head of the list.
- Therefore, the previous node cannot be accessed normally.
- Since the given node is guaranteed not to be the tail, node.next always
  exists.
- Copying the successor's value makes the current node represent the
  successor, and skipping node.next removes the successor from the chain.

---

## Mistakes Made

- Initially considered shifting all subsequent elements forward.
- The key observation is that linked-list nodes do not need to be physically
  moved; their stored values and next references can be modified directly.

---

## Similar Problems

- [Remove Linked List Elements](https://leetcode.com/problems/remove-linked-list-elements/)
- [Remove Nodes From Linked List](https://leetcode.com/problems/remove-nodes-from-linked-list/)
- [Delete Nodes From Linked List Present in Array](https://leetcode.com/problems/delete-nodes-from-linked-list-present-in-array/)

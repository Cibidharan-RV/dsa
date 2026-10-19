# [1721. Swapping Nodes in a Linked List](https://leetcode.com/problems/swapping-nodes-in-a-linked-list/)

## Date
2026-10-19

## Difficulty
Medium

## Topics
- Linked List
- Two Pointers

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/swapping-nodes-in-a-linked-list/submissions/2176269243)

- Create a dummy node before `head` and initialize `dummy2` and `count` to this sentinel.
- Advance `dummy` exactly `k` times so that it points to the k-th node from the beginning.
- Set `count = dummy`. Advance `count` and `dummy2` together until `count` becomes null. Since `dummy2` starts at the sentinel, it advances once for every node from the k-th node to the end.
- After this traversal, `dummy2` points to the node at position `n - k + 1` from the beginning, which is the k-th node from the end, where n is the list length.
- Swap the values of `dummy` and `dummy2`, then return the original `head`. The node links remain unchanged.

---

## Time Complexity

`O(n)`, where n is the number of nodes. Finding the k-th node takes O(k) time, and the second traversal takes O(n - k + 1) time.

## Space Complexity

`O(1)` auxiliary space because only a constant number of pointers and one integer are used.

---

## Key Learning

- A **fixed-distance pointer traversal** can locate a corresponding node from the end without explicitly counting the entire list.
- A dummy head provides a consistent starting position for pointer traversal.
- Swapping node values is simpler than rewiring links when the problem permits value swapping.

---

## Similar Problems

- [Remove Nth Node From End of List](https://leetcode.com/problems/remove-nth-node-from-end-of-list/)
- [Swap Nodes in Pairs](https://leetcode.com/problems/swap-nodes-in-pairs/)
- [Reverse Nodes in k-Group](https://leetcode.com/problems/reverse-nodes-in-k-group/)

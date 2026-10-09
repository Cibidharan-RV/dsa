# [24. Swap Nodes in Pairs](https://leetcode.com/problems/swap-nodes-in-pairs/)

## Date
2026-10-09

## Difficulty
Medium

## Topics
- Linked List
- Recursion

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/swap-nodes-in-pairs/submissions/2167162814)

- Initialize `curr_swap` to the first node and `next_swap` to the second node.
- If the list is empty or contains only one node, return it unchanged.
- Store the second node as `newHead`, since it becomes the head after the first swap.
- For each pair, save the node after the pair in `next`.
- Store the second node of the current pair in `next_swap`.
- Reverse the pair by connecting `head.next` to `curr_swap`, then connect the swapped pair to `next`.
- Advance `head` to the next unprocessed node and update `curr_swap` to the second node of the pair just swapped.
- When the loop finishes, if an unpaired node remains, connect it to `curr_swap` and terminate the list.
- Return `newHead`, which points to the first node of the swapped list.

---

## Time Complexity

`O(n)`, where n = number of nodes. Each pair is processed once, and the list is traversed sequentially.

## Space Complexity

`O(1)` auxiliary space. Only a constant number of node references are used, and no replacement nodes are allocated.

---

## Key Learning

- Swapping linked-list nodes requires changing their `next` references rather than swapping their values.
- Save the node after a pair before rewiring pointers so the remaining list stays accessible.
- Handle an odd-length list by preserving the final unpaired node.
- The new head can be identified before the first swap when the first two nodes exchange positions.

---

## Similar Problems

- [Reverse Nodes in k-Group](https://leetcode.com/problems/reverse-nodes-in-k-group/)
- [Swapping Nodes in a Linked List](https://leetcode.com/problems/swapping-nodes-in-a-linked-list/)

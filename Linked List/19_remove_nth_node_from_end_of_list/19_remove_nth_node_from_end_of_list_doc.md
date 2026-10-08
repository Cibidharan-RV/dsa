# [19. Remove Nth Node From End of List](https://leetcode.com/problems/remove-nth-node-from-end-of-list/)

## Date
2026-10-08

## Difficulty
Medium

## Topics
- Linked List
- Two Pointers

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/remove-nth-node-from-end-of-list/submissions/2166438623)

- Use a **dummy node** before the head so that deleting the head becomes the same as deleting any other node.
- Keep two pointers, `fast` and `slow`, initially at the dummy node.
- Move `fast` `n + 1` positions ahead of `slow`.
- This creates a gap of `n` actual nodes between the two pointers.
- Move both pointers together until `fast` reaches `null`.
- At this point, `slow` is positioned immediately before the node that must be removed.
- Skip that node using `slow.next = slow.next.next`.
- Return `dummy.next` because the original head may have been removed.

---

## Time Complexity

`O(n)`, where n = number of nodes. `fast` traverses the list once and `slow` traverses at most the remaining part of the list.

## Space Complexity

`O(1)` auxiliary space. Only the dummy node and two pointers are used.

---

## Key Learning

- A **dummy node** removes special cases when an operation may modify the head.
- In two-pointer problems, create a fixed gap between pointers and maintain that gap while traversing.
- For deleting the nth node from the end, positioning `slow` immediately before the target makes deletion a direct pointer update.
- A dummy node is especially useful for linked-list insertion and deletion problems involving the head.

---

## Similar Problems

- [Swapping Nodes in a Linked List](https://leetcode.com/problems/swapping-nodes-in-a-linked-list/)
- [Delete N Nodes After M Nodes of a Linked List](https://leetcode.com/problems/delete-n-nodes-after-m-nodes-of-a-linked-list/)
- [Delete the Middle Node of a Linked List](https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/)

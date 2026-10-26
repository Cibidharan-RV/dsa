# [2816. Double a Number Represented as a Linked List](https://leetcode.com/problems/double-a-number-represented-as-a-linked-list/)

## Date
2026-10-26

## Difficulty
Medium

## Topics
- Linked List
- Math
- Stack

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/double-a-number-represented-as-a-linked-list/submissions/2182309739)

- Double the linked-list number in place without reversing the list, recursion, or a stack.
- If the first digit is at least `5`, subtract `5` from it and prepend a new node with value `1` to handle the extra leading carry.
- Traverse the list from left to right using `cur`.
- If the next digit is at least `5`, subtract `5` from that digit and set the current digit to `cur.val * 2 + 1`.
- Otherwise, double the current digit using `cur.val * 2`.
- The next digit's original value determines whether doubling the current digit produces a carry.
- Return `head`, which points to the updated list, including the new leading node when required.

---

## Time Complexity

`O(n)`, where n is the number of nodes. Each original node is visited once.

## Space Complexity

`O(1)` auxiliary space. The algorithm modifies existing nodes in place and allocates at most one new node.

---

## Key Learning

- A predictable carry condition can eliminate the need to reverse a singly linked list.
- When doubling a decimal digit, a carry is produced exactly when the digit is at least `5`.
- Handle a possible new leading digit separately before traversing the remaining list.
- In-place arithmetic avoids allocating a replacement node for every digit.

---

## Similar Problems

- [Add Two Numbers](https://leetcode.com/problems/add-two-numbers/)
- [Plus One Linked List](https://leetcode.com/problems/plus-one-linked-list/)

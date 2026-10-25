# [2130. Maximum Twin Sum of a Linked List](https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/)

## Date
2026-10-25

## Difficulty
Medium

## Topics
- Linked List
- Two Pointers
- Stack

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/submissions/2181322039)

- Use the slow and fast pointers to find the middle of the even-length linked list.
- Move `fast` two nodes and `slow` one node per iteration. Since the problem guarantees an even number of nodes, `fast` reaches `null` when `slow` reaches the start of the second half.
- Reverse the second half in place using `prev`, `cur`, and `next` pointers.
- Traverse the first half using `head` and the reversed second half using `prev` simultaneously.
- For each pair, calculate `head.val + prev.val` and update `maxSum` with the maximum twin sum.
- Return `maxSum` after processing all pairs.

---

## Time Complexity

`O(n)`, where n is the number of nodes. Finding the middle, reversing the second half, and calculating twin sums each take linear time.

## Space Complexity

`O(1)` auxiliary space. The algorithm uses a constant number of pointers and variables, and reverses the second half in place.

---

## Key Learning

- The slow-fast pointer technique finds the middle in a single traversal.
- Reversing the second half enables symmetric pairing without storing node values in an array.
- Two pointers traversing opposite halves allow twin sums to be calculated in constant extra space.
- Maintain a running maximum when only the largest value among computed pairs is required.

---

## Similar Problems

- [Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/)
- [Palindrome Linked List](https://leetcode.com/problems/palindrome-linked-list/)
- [Middle of the Linked List](https://leetcode.com/problems/middle-of-the-linked-list/)

# [147. Insertion Sort List](https://leetcode.com/problems/insertion-sort-list/)

## Date
2026-10-17

## Difficulty
Medium

## Topics
- Linked List
- Sorting

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/insertion-sort-list/submissions/2174527196)

- Use `dummy` as a sentinel node before the original head, `prev` to track the node before `cur`, and `cur` to identify the next node to process.
- Maintain the invariant that the portion before `cur` is sorted.
- If `cur.val > prev.val`, the current node is already correctly positioned relative to its predecessor, so advance both pointers.
- Otherwise, search from `dummy` for the first node whose value is greater than or equal to `cur.val`. This identifies where `cur` must be inserted.
- Detach `cur` by connecting `prev.next` to `cur.next`, insert `cur` before the identified node, and continue from `prev.next`.
- Return `dummy.next` to obtain the sorted list without the sentinel node.
- The implementation assumes `head` is non-null because it initializes `cur` using `head.next`.

---

## Time Complexity

`O(n^2)`, where n is the number of nodes. Each node may require scanning the already sorted portion to find its insertion position.

## Space Complexity

`O(1)` auxiliary space because sorting is performed by rearranging existing node links using a constant number of pointers.

---

## Key Learning

- **Insertion sort on a linked list** builds a sorted prefix by inserting each out-of-order node into its correct position.
- A dummy head simplifies insertion before the original head.
- Tracking the predecessor of the current node makes it possible to detach a node without losing the remaining list.
- Linked-list insertion takes `O(1)` once the insertion position is found, but finding that position can take `O(n)` time.

---

## Mistakes Made

- The code accesses `head.next` before checking whether `head` is null. Handle an empty list before dereferencing the head.

---

## Similar Problems

- [Sort List](https://leetcode.com/problems/sort-list/)
- [Insert into a Sorted Circular Linked List](https://leetcode.com/problems/insert-into-a-sorted-circular-linked-list/)

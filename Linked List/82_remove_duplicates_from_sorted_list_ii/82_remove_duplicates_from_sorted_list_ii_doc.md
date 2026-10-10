# [82. Remove Duplicates from Sorted List II](https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/)

## Date
2026-10-10

## Difficulty
Medium

## Topics
- Linked List
- Two Pointers

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/submissions/2168542782)

- Use a **dummy node** before the head to handle cases where the original head contains duplicates.
- Maintain `prev` as the last node confirmed to have a unique value and `curr` as the node being examined.
- If `curr` and `curr.next` have the same value, store that value in `num`.
- Advance `curr` past every consecutive node containing `num`, removing all occurrences of that duplicated value.
- Connect `prev.next` to the first node with a different value, bypassing the entire duplicate group.
- If the current value is unique, advance both `prev` and `curr` to continue checking the list.
- Return `dummy.next` because the original head may have been removed.

---

## Time Complexity

`O(n)`, where n = number of nodes. Each node is traversed at most a constant number of times.

## Space Complexity

`O(1)` auxiliary space. Only a dummy node and a constant number of pointers are used.

---

## Key Learning

- In a sorted list, duplicate values occur consecutively, so an adjacent comparison detects duplicate groups.
- To remove all occurrences of a duplicated value, skip the entire group rather than retaining one copy.
- A **dummy node** simplifies deletion when the head belongs to a duplicate group.
- Keep `prev` stationary while skipping duplicates so it can reconnect the list to the next valid node.

---

## Similar Problems

- [Remove Duplicates from Sorted List](https://leetcode.com/problems/remove-duplicates-from-sorted-list/)
- [Remove Duplicates From an Unsorted Linked List](https://leetcode.com/problems/remove-duplicates-from-an-unsorted-linked-list/)

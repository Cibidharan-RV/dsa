# [21. Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/)

## Date
2026-10-09

## Difficulty
Easy

## Topics
- Linked List
- Recursion

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/merge-two-sorted-lists/submissions/2166644810)

- Use a **dummy node** as the starting point of the merged list.
- Keep `dummy` as the current tail of the merged list and `head` as the fixed reference to the dummy.
- Compare the current nodes of `list1` and `list2`.
- Attach the smaller node to `dummy`, then advance that list and move `dummy` forward.
- Continue until one of the two lists becomes `null`.
- Append all remaining nodes from the non-empty list.
- Return `head.next`, which is the actual head of the merged sorted list.
- The existing nodes are reused; no new nodes are created for the merged result.

---

## Time Complexity

`O(n + m)`, where n = number of nodes in `list1` and m = number of nodes in `list2`. Every node from both lists is processed once.

## Space Complexity

`O(1)` auxiliary space. Only a dummy node and a constant number of pointers are used; the existing list nodes are rearranged in place.

---

## Key Learning

- A **dummy node** simplifies building a linked list by eliminating the special case for the first node.
- In a merge operation, compare the current elements and advance only the list from which the selected element came.
- When one sorted list is exhausted, its remaining list can be connected directly because it is already sorted.
- Reusing existing nodes avoids unnecessary memory allocation during linked-list merging.

---

## Similar Problems

- [Merge k Sorted Lists](https://leetcode.com/problems/merge-k-sorted-lists/)
- [Merge Sorted Array](https://leetcode.com/problems/merge-sorted-array/)
- [Sort List](https://leetcode.com/problems/sort-list/)
- [Shortest Word Distance II](https://leetcode.com/problems/shortest-word-distance-ii/)
- [Add Two Polynomials Represented as Linked Lists](https://leetcode.com/problems/add-two-polynomials-represented-as-linked-lists/)
- [Longest Common Subsequence Between Sorted Arrays](https://leetcode.com/problems/longest-common-subsequence-between-sorted-arrays/)
- [Merge Two 2D Arrays by Summing Values](https://leetcode.com/problems/merge-two-2d-arrays-by-summing-values/)

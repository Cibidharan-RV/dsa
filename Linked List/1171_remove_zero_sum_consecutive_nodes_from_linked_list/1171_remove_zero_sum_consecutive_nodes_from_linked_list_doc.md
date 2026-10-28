# [1171. Remove Zero Sum Consecutive Nodes from Linked List](https://leetcode.com/problems/remove-zero-sum-consecutive-nodes-from-linked-list/)

## Date
2026-10-28

## Difficulty
Medium

## Topics
- Hash Table
- Linked List

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/remove-zero-sum-consecutive-nodes-from-linked-list/submissions/2184123511)

- Use a dummy node with value `0` before the head to handle zero-sum sublists that begin at the first node.
- In the first traversal, calculate the running prefix sum `ps` and store each sum's corresponding node in the hash map. Repeated sums overwrite earlier entries, so the map retains the last occurrence of each prefix sum.
- In the second traversal, recalculate the prefix sum from the dummy node.
- For each node, set `cur.next` to `map.get(ps).next`. This skips all nodes between the current node and the last occurrence of the same prefix sum, since that sublist sums to zero.
- Continue traversal through the modified list and return `dummy.next`.

---

## Time Complexity

`O(n)` expected time, where n is the number of nodes. Two traversals perform expected constant-time hash map operations per node.

## Space Complexity

`O(n)` auxiliary space for the hash map, which stores at most n + 1 distinct prefix sums.

---

## Key Learning

- Equal prefix sums indicate that the sublist between their corresponding positions has a sum of zero.
- Storing the last occurrence of each prefix sum allows entire zero-sum regions to be skipped directly.
- A dummy node simplifies handling removals that include the original head.
- A two-pass approach can avoid repeated cleanup traversals and achieve linear expected time.

---

## Similar Problems

- [Delete N Nodes After M Nodes of a Linked List](https://leetcode.com/problems/delete-n-nodes-after-m-nodes-of-a-linked-list/)

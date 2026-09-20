# [138. Copy List with Random Pointer](https://leetcode.com/problems/copy-list-with-random-pointer/)

## Date
2026-09-20

## Difficulty
Medium

## Topics
- Hash Table
- Linked List

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/copy-list-with-random-pointer/submissions/2147337278)

Create a clone of every original node and connect each clone through the
normal next-pointer structure.
Store every original node as a key in a HashMap and map it to its clone.
Traverse both lists again and assign each clone's random pointer using the
original node's random pointer as the key in the map.
Return the head of the cloned list.

---

## Time Complexity

O(n)

## Space Complexity

O(n) $
 
$l
- The HashMap maintains a direct mapping from every original node to its
  corresponding cloned node.
- Nodes themselves are used as HashMap keys, not their values, because
  different nodes can contain the same value.
- The first traversal creates the complete cloned next-pointer structure.
- The second traversal reconstructs the random-pointer relationships.
- HashMap.get(null) returns null, so nodes without a random pointer are handled
  naturally.

---

## Key Learning

- The HashMap maintains a direct mapping from every original node to its
  corresponding cloned node.
- Nodes themselves are used as HashMap keys, not their values, because
  different nodes can contain the same value.
- The first traversal creates the complete cloned next-pointer structure.
- The second traversal reconstructs the random-pointer relationships.
- HashMap.get(null) returns null, so nodes without a random pointer are handled
  naturally.

---

## Similar Problems

- [Clone Graph](https://leetcode.com/problems/clone-graph/)
- [Clone Binary Tree With Random Pointer](https://leetcode.com/problems/clone-binary-tree-with-random-pointer/)
- [Clone N-ary Tree](https://leetcode.com/problems/clone-n-ary-tree/)

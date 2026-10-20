# [1019. Next Greater Node In Linked List](https://leetcode.com/problems/next-greater-node-in-linked-list/)

## Date
2026-10-20

## Difficulty
Medium

## Topics
- Array
- Linked List
- Stack
- Monotonic Stack

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/next-greater-node-in-linked-list/submissions/2176927330)

- Store the linked-list values in an `ArrayList` so they can be accessed by index, and create an answer array initialized to zero.
- Maintain a stack of indices representing elements whose next greater value has not yet been found.
- For each index `i`, compare its value with the value at the index on top of the stack. If the current value is greater, assign it to that earlier index in the answer array and pop the index.
- Continue resolving earlier indices until the stack is empty or its top value is greater than or equal to the current value, then push `i`.
- Any index remaining in the stack has no greater value to its right, so its answer remains zero.
- Each index is pushed once and popped at most once. The `if (arr[stack.peek()] == 0)` condition is redundant because an index is popped immediately after its answer is assigned, but it does not affect correctness for valid inputs.

---

## Time Complexity

`O(n)` time, where `n` is the number of nodes. Building the list takes `O(n)`, and each index is pushed and popped at most once, so all stack operations together take `O(n)`.

## Space Complexity

`O(n)` auxiliary space for the values list and index stack. The returned answer array uses an additional `O(n)` space.

---

## Key Learning

- A **monotonic stack** efficiently finds the next greater element by resolving previous elements when a larger value appears.
- Storing indices instead of values preserves the positions needed to update the corresponding answers.
- Each element entering and leaving a stack at most once often gives an amortized `O(n)` bound, even when a `while` loop is nested inside a `for` loop.
- An answer array initialized to zero can naturally represent elements for which no greater value exists.

---

## Similar Problems

- 

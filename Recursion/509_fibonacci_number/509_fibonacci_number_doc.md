# [509. Fibonacci Number](https://leetcode.com/problems/fibonacci-number/)

## Date
2026-09-24

## Difficulty
Easy

## Topics
- Math
- Dynamic Programming
- Recursion
- Memoization

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/fibonacci-number/submissions/2152286288)

Uses recursion with memoization.

For `n <= 2`, the Fibonacci value is returned directly.

For larger `n`, `fibfunc(n)` recursively computes `fibfunc(n - 1)` and `fibfunc(n - 2)`, then stores their sum in `memory[n - 2]`.

Before calculating a state, the code checks whether its value is already stored. This avoids recalculating the same Fibonacci subproblem multiple times.

The public `fib()` method handles the initial edge cases and initializes the memoization array before starting the recursive computation.

---

## Time Complexity

O(n)

## Space Complexity

O(n) auxiliary space.

`O(n)` is used by the memoization array and `O(n)` by the maximum recursion depth.

---

## Key Learning

- Memoization reduces the repeated-subproblem recursion from exponential time to linear time.
- `memory[n - 2]` is used instead of `memory[n]`, allowing the array size to be `n - 1`.
- `0` is used as the uncomputed marker. This works here because the `fib(0)` case is handled separately.
- Recursive calls must use `fibfunc()` rather than `fib()`, because `fib()` initializes the `memory` array.
- The base cases prevent invalid recursive calls and handle the initial Fibonacci values directly.

---

## Mistakes Made

- Initially allocated `memory` with size `n`, but `memory[n]` is outside the valid index range. The indexing was changed to `n - 2`, allowing an array of size `n - 1`.
- Initially used `fib()` inside `fibfunc()`. This was incorrect because every call to `fib()` recreates the memoization array. The recursive calls were changed to `fibfunc()`.

---

## Similar Problems

- [Climbing Stairs](https://leetcode.com/problems/climbing-stairs/)
- [Split Array into Fibonacci Sequence](https://leetcode.com/problems/split-array-into-fibonacci-sequence/)
- [Length of Longest Fibonacci Subsequence](https://leetcode.com/problems/length-of-longest-fibonacci-subsequence/)
- [N-th Tribonacci Number](https://leetcode.com/problems/n-th-tribonacci-number/)

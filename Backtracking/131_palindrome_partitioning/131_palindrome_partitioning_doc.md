# [131. Palindrome Partitioning](https://leetcode.com/problems/palindrome-partitioning/)

## Date
2026-10-01

## Difficulty
Medium

## Topics
- String
- Dynamic Programming
- Backtracking

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/palindrome-partitioning/submissions/2159093516)

Generate all possible palindrome partitions of `s` using recursive backtracking.

At each `start` position, try every possible `end` position to choose the next
partition segment `s[start...end]`. If the segment is a palindrome, add it to
`parts` and recursively partition the remaining suffix starting at `end + 1`.

After the recursive call returns, remove the selected segment from `parts` to
restore the previous state and continue with the next possible `end`.

When `start == s.length()`, every character has been included in a partition,
so a copy of `parts` is added to the result.

The key recursion pattern is **boundary-based backtracking**: instead of
choosing whether to include an individual character, choose where the current
partition segment ends.

The palindrome check can be memoized using `Boolean[][] memo`. Each
`memo[start][end]` stores whether `s[start...end]` is a palindrome, avoiding
repeated palindrome checks for the same substring.

---

## Time Complexity

Without memoization: **O(n² · 2^n)** worst-case time due to repeated palindrome checks.
With palindrome memoization: **O(n · 2^n)** worst-case time, plus **O(n²)** preprocessing/memoization.

## Space Complexity

Auxiliary space with memoization is **O(n²)** for the palindrome table plus **O(n)** recursion/path space.
The returned result requires **O(n · 2^n)** space in the worst case.

---

## Key Learning

- The recursion state is defined by the beginning of the unpartitioned suffix,
  `start`, while `end` represents the boundary chosen for the current segment.
- This is a **boundary-based backtracking** pattern, distinct from
  include/exclude and choose-unused-element recursion.
- `Boolean[][]` provides three memoization states: `null` = uncomputed,
  `true` = palindrome, and `false` = not a palindrome.
- The palindrome recurrence only depends on the two endpoints and the inner
  substring, allowing previously computed palindrome states to be reused.
- Memoization is useful here because the same `(start, end)` palindrome
  subproblems can be encountered repeatedly across different partition paths.

---

## Similar Problems

- [Palindrome Partitioning II](https://leetcode.com/problems/palindrome-partitioning-ii/)
- [Palindrome Partitioning IV](https://leetcode.com/problems/palindrome-partitioning-iv/)
- [Maximum Number of Non-overlapping Palindrome Substrings](https://leetcode.com/problems/maximum-number-of-non-overlapping-palindrome-substrings/)

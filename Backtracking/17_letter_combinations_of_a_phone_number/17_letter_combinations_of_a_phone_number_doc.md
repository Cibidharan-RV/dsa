# [17. Letter Combinations of a Phone Number](https://leetcode.com/problems/letter-combinations-of-a-phone-number/)

## Date
2026-10-04

## Difficulty
Medium

## Topics
- Hash Table
- String
- Backtracking

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/letter-combinations-of-a-phone-number/submissions/2161938342)

Use DFS backtracking to generate every possible letter combination.

At recursion level `i`, process the digit at index `i`. Iterate through
all letters mapped to that digit, append one letter to `seq`, recurse to
the next digit, and then remove the appended letter before trying the
next choice.

The recursion therefore represents one complete decision path at a time.
When `i == len`, all digits have been processed, so the current
`StringBuilder` represents one complete combination. A new `String` is
created before adding it to `seqs` because `seq` is reused and mutated
during backtracking.

The `append -> recurse -> delete` pattern restores the previous state
after every recursive branch.

---

## Time Complexity

`O(n * 4^n)`, where `n` is the number of digits. There are at most `4^n`
combinations, and copying each completed combination into a `String`
takes `O(n)`.

## Space Complexity

`O(n)` auxiliary space for the recursion stack and the current
`StringBuilder`, where `n` is the number of digits. The returned
combinations are excluded from auxiliary space.

---

## Key Learning

- **Backtracking** can generate one complete solution path at a time
  instead of storing all intermediate partial solutions.
- The **recursion depth represents the number of decisions made**;
  here, one level corresponds to one digit.
- The **append -> recurse -> delete** pattern restores the previous
  state before exploring the next choice.
- A mutable object can be reused across branches when its state is
  restored correctly after recursion.

---

## Similar Problems

- [Generate Parentheses](https://leetcode.com/problems/generate-parentheses/)
- [Combination Sum](https://leetcode.com/problems/combination-sum/)
- [Binary Watch](https://leetcode.com/problems/binary-watch/)
- [Count Number of Texts](https://leetcode.com/problems/count-number-of-texts/)
- [Minimum Number of Pushes to Type Word I](https://leetcode.com/problems/minimum-number-of-pushes-to-type-word-i/)
- [Minimum Number of Pushes to Type Word II](https://leetcode.com/problems/minimum-number-of-pushes-to-type-word-ii/)

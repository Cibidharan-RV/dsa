# [282. Expression Add Operators](https://leetcode.com/problems/expression-add-operators/)

## Date
2026-10-07

## Difficulty
Hard

## Topics
- Math
- String
- Backtracking

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/expression-add-operators/submissions/2165211774)

At each position, choose every possible contiguous substring as the next operand.
For each chosen operand, try the three operators `+`, `-`, and `*`.

The evaluation state maintains:
- `s` = value contributed by all completed terms.
- `m` = value of the current multiplication chain.
- Current expression value = `s + m`.

For `+`, commit the current `m` into `s` and start a new positive term.
For `-`, commit the current `m` into `s` and start a new negative term.
For `*`, extend the current multiplication chain by multiplying `m`.

The first operand is handled separately because it has no operator before it.
Operands with leading zeroes are rejected, while a single `0` remains valid.
`long` is used so intermediate arithmetic does not overflow `int`.

---

## Time Complexity

`O(3^n)`, where `n` = number of digits, excluding the cost of constructing the returned expressions.
The recursion explores different operand boundaries and up to three operator choices for each subsequent operand.

## Space Complexity

`O(n)` auxiliary space, where `n` = number of digits.
This includes the recursion stack and the mutable expression builder.
The returned expressions are excluded.

---

## Key Learning

- **Operand boundaries are a separate decision from operator choices**. Backtracking must consider both how many digits form the next number and which operator follows it.
- The invariant `expression value = s + m` is a useful way to handle **multiplication precedence** without explicitly parsing the expression.
- Representing a subtraction term as a **negative `m`** allows multiplication to work naturally: `-3 * 4` becomes `m = -12`.
- The first operand is a special case in expression-generation problems because no operator precedes it.
- Leading-zero validation can prune an entire set of operand choices as soon as a multi-digit number begins with `0`.

---

## Mistakes Made

- Initially treated each digit as a separate operand, missing expressions such as `12+3` and `1+23`. The recursion must independently choose the length of each operand.
- Used an artificial sentinel value for the initial multiplication state. Handling the first operand separately gives the state a cleaner invariant.

---

## Similar Problems

- [Evaluate Reverse Polish Notation](https://leetcode.com/problems/evaluate-reverse-polish-notation/)
- [Basic Calculator](https://leetcode.com/problems/basic-calculator/)
- [Basic Calculator II](https://leetcode.com/problems/basic-calculator-ii/)
- [Different Ways to Add Parentheses](https://leetcode.com/problems/different-ways-to-add-parentheses/)
- [Target Sum](https://leetcode.com/problems/target-sum/)

# [9. Palindrome Number](https://leetcode.com/problems/palindrome-number/)

## Date
2026-09-05

## Difficulty
Easy

## Topics
- Math

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/palindrome-number/submissions/2132060243)

Store the original number and construct its reverse digit by digit.

For each digit:
- Extract the last digit using `x % 10`.
- Append it to `reversed` using `reversed * 10 + digit`.
- Remove the last digit from `x` using `x / 10`.

Finally, compare the reversed number with the original number.
Negative numbers are immediately rejected because they cannot be palindromes.

`reversed` is stored as `long long` to safely hold the reversed value during
the calculation.

---

## Time Complexity

O(log x)

## Space Complexity

O(1)

---

## Key Learning

- A number can be reversed without converting it to a string by repeatedly
  extracting its last digit.
- `% 10` extracts the last digit, while `/ 10` removes it.
- Comparing the reversed number with the original determines whether the
  number is a palindrome.

---

## Mistakes Made

- No mistakes.

---

## Similar Problems

- [Palindrome Linked List](https://leetcode.com/problems/palindrome-linked-list/)
- [Find Palindrome With Fixed Length](https://leetcode.com/problems/find-palindrome-with-fixed-length/)
- [Strictly Palindromic Number](https://leetcode.com/problems/strictly-palindromic-number/)
- [  Count Symmetric Integers](https://leetcode.com/problems/count-symmetric-integers/)
- [Find the Count of Good Integers](https://leetcode.com/problems/find-the-count-of-good-integers/)
- [Find the Largest Palindrome Divisible by K](https://leetcode.com/problems/find-the-largest-palindrome-divisible-by-k/)

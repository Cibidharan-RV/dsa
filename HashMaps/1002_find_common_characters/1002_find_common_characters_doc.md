# 1002. Find Common Characters

## Difficulty
Easy

## Topic
- Mid Level
- Array
- Hash Table
- String
- Weekly Contest 126

---

## Idea

store the freq of each letter for each word and then compare and store the minimum freq for the letter seen so far. and finally we get a vector with minimum freq of each english alphabet, that is the number of times that letter repeated per word throughout the list of words.

---

## Time Complexity

O(N * W)

## Space Complexity

O(1)

---

## Mistakes Made

- Initially forgot duplicate case.
- Stored freq of letters in all words.
---
# 485. Max Consecutive Ones

## Difficulty
Easy

## Topic
- Array

---

## Idea

count till seening 0, if zero appeared update max_count and resest the counter.

Example :

input = [1, 1, 0, 1, 1, 1]

count 1st 1 -> 1
count 2st 1 -> 2
count 0 -> max = (0 > 2) ? 0 : 2  => 2, reset count = 0
count 1st 1 -> 1
count 2st 1 -> 2
count 3st 1 -> 3

max = (2 > 3) ? 2 : 3 => 3


---

## Time Complexity

O(n)

## Space Complexity

O(1)

---

## Similar Problems

- Max Consecutive Ones II (premium)
- Max Consecutive Ones III
- Consecutive Characters
- Longer Contiguous Segments of Ones than Zeros
- Length of the Longest Alphabetical Continuous Substring
- Maximum Enemy Forts That Can Be Captured
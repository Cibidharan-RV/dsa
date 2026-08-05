# 283. Move Zeroes

## Difficulty
Easy

## Topic
- Array
- Hash Map

---

## Idea

- use two index variables, one increament normally passing through all the numbers, another will be incrementeed only when seeing a non-zero number. 
- if seeing a non-zero number copy it to the non-zero iterating index and increase it by one. 
- then enter 0's on all the places after the normal index reaches end, and the non-zero index in the mid.

---

## Time Complexity

k = number of zeroes.

O(n + k)

## Space Complexity

O(1)

---

## Key Learning

- two pointer for modification in place is one of the smartest ways to solve this problem

## Similar Problems

- Remove Element
- Apply Operations to an Array
- Remove Duplicates from Sorted Array
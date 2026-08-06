# 136. Single Number

## Difficulty
Easy

## Topic
- Array
- Bit Manipulation (XOR)

---

## Idea

use the property of XOR. that is X ^ X = 0 and X ^ 0 = X. 
store an int variable with first element, then iterate through all the array, and apply xor with that variable for each element. after the iteration ends the unique number wil be stored in the variable.

Example 

input [1,1,2,3,2]
    xr = 1
    xr = 1 ^ 1 => 0
    xr = 0 ^ 2 => 2
    xr = 2 ^ 3 => 1
    xr = 1 ^ 2 => 3

---

## Time Complexity

O(n)

## Space Complexity

O(1)

---

## Key Learning

- Property of XOR

---

## Mistakes Made


---

## Similar Problems

- Single Number II
- Single Number III
- Missing Number
- Find the Duplicate Number
- Find the Difference
- Find the XOR of Numbers Which Appear Twice
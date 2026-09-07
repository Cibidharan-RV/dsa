# [410. Split Array Largest Sum](https://leetcode.com/problems/split-array-largest-sum/)

## Date
2026-09-07

## Difficulty
Hard

## Topics
- Array
- Binary Search
- Dynamic Programming
- Greedy
- Prefix Sum

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/split-array-largest-sum/submissions/2134166197)

For a given `maxAllowedSum`, greedily split `nums` whenever adding the next
element would make the current subarray sum exceed `maxAllowedSum`.

`isFeasible()` counts the number of subarrays required:
- If `currentSum + num <= maxAllowedSum`, add `num` to the current subarray.
- Otherwise, start a new subarray with `num`.
- If `subarrayCount` exceeds `maxSubarrays`, the candidate is not feasible.

The minimum possible maximum subarray sum is the largest element in `nums`,
because every element must belong to some subarray.

The maximum possible value is the sum of all elements, because the entire
array can be one subarray.

Since feasibility is monotonic, binary search is performed between these
two bounds to find the smallest feasible maximum subarray sum.

`binarySearch()` performs the binary search using the supplied feasibility
function.

---

## Time Complexity

O(n log S), where `S` is the sum of all elements in `nums`.

## Space Complexity

O(n)

---

## Key Learning

- This problem uses the same binary-search-on-answer pattern used in Koko
  Eating Bananas, Smallest Divisor Given a Threshold, and Capacity To Ship
  Packages Within D Days.
- The candidate answer represents the maximum allowed subarray sum rather
  than a split position.
- Greedily creating a new subarray when the current sum would exceed the
  candidate gives the minimum number of subarrays needed for that candidate.
- If a candidate is feasible, every larger candidate is also feasible,
  giving the monotonic property required for binary search.
- The answer lies between the maximum element and the total sum.

---

## Mistakes Made

- Initially tried using `sum / k` as a target for directly choosing split
  positions, but this greedy approach does not guarantee the optimal
  maximum subarray sum.
- Recognized that the problem can be solved using the same binary-search-on-
  answer pattern used in previously solved problems.

---

## Similar Problems

- [Capacity To Ship Packages Within D Days](https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/)
- [Divide Chocolate](https://leetcode.com/problems/divide-chocolate/)
- [Fair Distribution of Cookies](https://leetcode.com/problems/fair-distribution-of-cookies/)
- [Subsequence of Size K With the Largest Even Sum](https://leetcode.com/problems/subsequence-of-size-k-with-the-largest-even-sum/)
- [Maximum Total Beauty of the Gardens](https://leetcode.com/problems/maximum-total-beauty-of-the-gardens/)
- [Number of Ways to Split Array](https://leetcode.com/problems/number-of-ways-to-split-array/)
- [Minimum Cost to Split an Array](https://leetcode.com/problems/minimum-cost-to-split-an-array/)
- [Distribute Elements Into Two Arrays I](https://leetcode.com/problems/distribute-elements-into-two-arrays-i/)
- [Distribute Elements Into Two Arrays II](https://leetcode.com/problems/distribute-elements-into-two-arrays-ii/)

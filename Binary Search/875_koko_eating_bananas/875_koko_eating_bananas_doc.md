# [875. Koko Eating Bananas](https://leetcode.com/problems/koko-eating-bananas/)

## Date
2026-09-01

## Difficulty
Medium

## Topics
- Array
- Binary Search

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/koko-eating-bananas/submissions/2127092666)

Use binary search on the possible eating speed.

For a given speed, calculate the number of hours required to finish all
banana piles using ceiling division:

`ceil(num / speed) = (num + speed - 1) / speed`

The feasibility of a speed is monotonic:

- If a speed is sufficient to finish within `h` hours, every greater speed
  is also sufficient.
- If a speed is insufficient, every smaller speed is also insufficient.

Therefore, binary search for the minimum feasible speed.

The search range is:
- Lower bound: `ceil(sum(piles) / h)`, since Koko must eat the total number
  of bananas within `h` hours.
- Upper bound: `max(piles)`, since this speed finishes each pile in one hour.

During the feasibility check, stop immediately if the required hours exceed
`h`.

The main idea is:

> Binary search the answer because feasibility changes monotonically from
> impossible to possible as the eating speed increases.

---

## Time Complexity

O(n log M)

## Space Complexity

O(1)

---

## Key Learning

- Binary search can be applied to an answer/search space, not only to a
  sorted array.
- The key requirement is a monotonic feasibility condition.
- The lower and upper bounds of the answer can be tightened using the
  total number of bananas and the largest pile.
- Ceiling division with integers avoids floating-point calculations.

---

## Mistakes Made

- Initially started the search speed from `0`; speed must start from `1`.
- Initially used `ceil(num / i)` with integer operands, causing integer
  division before `ceil()`.
- Initially used the sum of all piles as the upper bound instead of the
  maximum pile size.
- Initially used `int` accumulation for the total pile size, which can
  overflow; changed the accumulation to `long long`.

---

## Similar Problems

- [Minimize Max Distance to Gas Station](https://leetcode.com/problems/minimize-max-distance-to-gas-station/)
- [Maximum Candies Allocated to K Children](https://leetcode.com/problems/maximum-candies-allocated-to-k-children/)
- [Minimized Maximum of Products Distributed to Any Store](https://leetcode.com/problems/minimized-maximum-of-products-distributed-to-any-store/)
- [Frog Jump II](https://leetcode.com/problems/frog-jump-ii/)
- [Minimum Time to Repair Cars](https://leetcode.com/problems/minimum-time-to-repair-cars/)

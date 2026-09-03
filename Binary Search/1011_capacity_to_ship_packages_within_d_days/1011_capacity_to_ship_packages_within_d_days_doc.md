# [1011. Capacity To Ship Packages Within D Days](https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/)

## Date
2026-09-03

## Difficulty
Medium

## Topics
- Array
- Binary Search

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/submissions/2129817048)

For a given `capacity`, simulate shipping the packages in order.

Keep adding weights to the current day until adding the next package
would exceed `capacity`. Start a new day in that case.

`isFine()` returns:
- `true` if all packages can be shipped within `days`.
- `false` as soon as the required number of days exceeds `days`.

The minimum possible capacity is the maximum individual weight, since
every package must fit on the ship.

The maximum possible capacity is the sum of all weights, since with this
capacity all packages can be shipped in one day.

The required capacity is monotonic:
- If a capacity works, every larger capacity also works.
- If a capacity does not work, every smaller capacity also does not work.

Therefore, binary search the capacity range `[low, high]` to find the
smallest valid capacity.

---

## Time Complexity

O(n log(S)), where `S` is the sum of all weights.

## Space Complexity

O(1)

---

## Key Learning

- Binary search can be applied to a numeric answer space when feasibility
  is monotonic.
- The lower bound can be the maximum individual weight, while the upper
  bound can be the total weight.
- Packages must be processed in their given order.
- The feasibility check can terminate early once `number_of_days` exceeds
  `days`.
- `low` and `high` can be calculated in a single pass.

---

## Mistakes Made

- Used a separate `accumulate()` pass for the upper bound before combining
  the maximum-weight and total-weight calculation into one loop.

---

## Similar Problems

- [Split Array Largest Sum](https://leetcode.com/problems/split-array-largest-sum/)
- [Divide Chocolate](https://leetcode.com/problems/divide-chocolate/)
- [Cutting Ribbons](https://leetcode.com/problems/cutting-ribbons/)
- [Minimized Maximum of Products Distributed to Any Store](https://leetcode.com/problems/minimized-maximum-of-products-distributed-to-any-store/)
- [Maximum Bags With Full Capacity of Rocks](https://leetcode.com/problems/maximum-bags-with-full-capacity-of-rocks/)
- [Minimum Total Distance Traveled](https://leetcode.com/problems/minimum-total-distance-traveled/)

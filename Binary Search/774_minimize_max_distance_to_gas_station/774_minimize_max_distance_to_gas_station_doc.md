# [774. Minimize Max Distance To Gas Station](https://www.geeksforgeeks.org/problems/minimize-max-distance-to-gas-station/1)

## Date
2026-09-08

## Difficulty
Hard

## Topics
- Binary Search

---

## Idea

For a given maximum allowed distance `maxDistance`, calculate how many new
stations are required to make every gap between consecutive stations at
most `maxDistance`.

For each gap of length `currentDistance`:

`ceil(currentDistance / maxDistance) - 1`

gives the number of new stations required inside that gap.

`isFeasible()` returns `false` as soon as the total `requiredStations`
exceeds `maxStations`.

The possible answer lies between:
- `0`, the theoretical minimum distance.
- The largest existing gap, which is the maximum distance when no new
  stations are added.

Binary search is performed over this continuous range. If a candidate
`middle` is feasible, search for a smaller distance. Otherwise, search
for a larger distance.

The search terminates when floating-point precision causes both bounds
to stop changing.

---

## Time Complexity

O(n log(P)), where `P` represents the required floating-point precision.

## Space Complexity

O(1)

---

## Key Learning

- For a fixed maximum distance, the number of additional stations required
  for each gap can be calculated independently.
- The total number of required stations provides a monotonic feasibility
  condition.
- Floating-point binary search uses `lowerBound = middle` and
  `upperBound = middle` rather than integer `+1` and `-1` updates.
- Floating-point binary search can terminate when the bounds stop changing.
- The number of stations required inside a gap is
  `ceil(currentDistance / maxDistance) - 1`.

---

## Mistakes Made

- Initially calculated `currentDistance / maxDistance - 1` directly,
  which incorrectly truncated the fractional result instead of applying
  ceiling.
- Initially checked whether each individual gap required more than `k`
  stations instead of tracking the total number of required stations.
- Initially used integer bounds and integer binary-search logic even though
  the answer can be fractional.

---

## Similar Problems

- 

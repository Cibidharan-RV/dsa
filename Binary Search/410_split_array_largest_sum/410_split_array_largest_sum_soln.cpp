class Solution {
	static bool isFeasible(vector<int>& nums, int maxSubarrays, long long maxAllowedSum) {
		int subarrayCount = 1;
		long long currentSum = 0;

		for (int num : nums) {
			if (currentSum + num > maxAllowedSum) {
				subarrayCount += 1;
				currentSum = num;
			} else {
				currentSum += num;
			}

			if (subarrayCount > maxSubarrays)
				return false;
		}

		return true;
	}

	int binarySearch(
			vector<int> nums,
			long long lowerBound,
			long long upperBound,
			int maxSubarrays,
			bool (*condition)(vector<int>&, int, long long)
		) {
		while (lowerBound <= upperBound) {
			long long middle = lowerBound + (upperBound - lowerBound) / 2;

			if (condition(nums, maxSubarrays, middle)) {
				upperBound = middle - 1;
			} else {
				lowerBound = middle + 1;
			}
		}

		return lowerBound;
	}

public:
	int splitArray(vector<int>& nums, int k) {
		long long lowerBound = *max_element(nums.begin(), nums.end());
		long long upperBound = accumulate(nums.begin(), nums.end(), 0LL);

		return binarySearch(nums, lowerBound, upperBound, k, isFeasible);
	}
};
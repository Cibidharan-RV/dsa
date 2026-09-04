class Solution {
	int getValue(vector<int>& arr, int index) {
		if (index < arr.size()) return arr[index];
		return arr[arr.size()-1] + (index - arr.size());
	}

public:
	int findKthPositive(vector<int>& arr, int k) {
		int low = 0,
			high = arr.size() - 1,
			mid;

		while (low <= high) {
			mid = low + (high - low) / 2;

			if (getValue(arr, mid) >= mid + k + 1) {
				high = mid - 1;
			} else {
				low = mid + 1;
			}
		}

		return low + k;
	}
};
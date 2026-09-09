class Solution {
	int get(const vector<int>& arr, int index) {
		if (index < 0)
			return INT_MIN;
		if (index >= arr.size())
			return INT_MAX;
		return arr[index];
	}

public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		if (nums1.size() > nums2.size())
			return findMedianSortedArrays(nums2, nums1);

		int total = nums1.size() + nums2.size();
		int leftSize = (total + 1) / 2;

		int low = 0;
		int high = nums1.size();

		while (low <= high) {
			int partition1 = low + (high - low) / 2;
			int partition2 = leftSize - partition1;

			int left1 = get(nums1, partition1 - 1);
			int right1 = get(nums1, partition1);
			int left2 = get(nums2, partition2 - 1);
			int right2 = get(nums2, partition2);

			if (left1 <= right2 && left2 <= right1) {
				if (total % 2 == 1)
					return max(left1, left2);

				return (
                    (double)max(left1, left2) + min(right1, right2)
                ) / 2;
			}

			if (left1 > right2)
				high = partition1 - 1;
			else
				low = partition1 + 1;
		}

		return -1;
	}
};
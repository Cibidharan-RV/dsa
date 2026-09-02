class Solution {
    bool calculateResultSum(vector<int>& nums, int threshold, int divisor) {
        int result_sum = 0;
        for (int num : nums) {
            result_sum += (num + divisor - 1) / divisor;
            if (result_sum > threshold) {
                return false;
            }
        }
        return true;
    }

public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        
        int low = 1,
            high = *max_element(nums.begin(), nums.end()),
            mid ;

        while (low <= high) {
            mid = low + (high - low) / 2;

            if (calculateResultSum(nums, threshold, mid)) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};
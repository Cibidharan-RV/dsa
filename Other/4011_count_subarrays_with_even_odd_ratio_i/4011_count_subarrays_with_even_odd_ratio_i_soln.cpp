// 4011. Count Subarrays With Even Odd Ratio I

class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
        int n = nums.size();
        int ans = 0;
        for (int l=0; l<n; ++l) {
            int eve = 0, odd = 0;
            for (int r=l; r<n; ++r) {
                if (nums[r]&1) {
                    ++odd;
                } else ++eve;
                if (odd > 0 && 1LL * b * eve <= 1LL * a * odd) ++ans;
            }
            
        }
        return ans;
    }
};

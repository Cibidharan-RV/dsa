//53. Maximum Subarray

class Solution {
public:

    int maxSubArray(vector<int>& nums) {
        
        int p=0, ms = nums[0], minp = 0;
        for (int i=0; i<nums.size(); ++i) {
            p+= nums[i];
            
            ms = max(ms, p-minp);
            if (p < minp) minp = p;
        }
        return ms;
    }
};
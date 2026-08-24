class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int minp = 1, maxp = 1, maxx = INT_MIN;

        for (int i =0; i<nums.size(); ++i) {
            int oldmin = minp;
            int oldmax = maxp;
            minp = min({nums[i], oldmin*nums[i], oldmax*nums[i]});
            maxp = max({nums[i], oldmin*nums[i], oldmax*nums[i]});
            maxx = max({minp, maxp, maxx});
        }
        return maxx;
    }
};
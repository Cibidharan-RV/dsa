class Solution {
public:
    bool check(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        for (int i=1; i<n; ++i) {
            if (nums[i] < nums[i-1]) ans += 1;
        }
        if (ans == 1) {
            if (nums[0] >= nums[n-1]) return true;
            return false;
        } else if (ans == 0) return true;
        else return false;
    }
};
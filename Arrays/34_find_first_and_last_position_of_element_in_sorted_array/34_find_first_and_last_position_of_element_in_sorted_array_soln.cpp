class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        if (n == 0) return {-1,-1};
        int l = 0,
            r = n;
        vector<int> ans = {0, n-1};
        while (l < r) {
            int mid = (l+r)/2;
            if (nums[mid] >= target) {
                r = mid;
                ans[0] = r;
            } else {
                l = mid+1;
            }
        }
        l = 0; r = n;
        while (l < r) {
            int mid = (l+r)/2;
            if (nums[mid] > target) {
                r = mid;
                ans[1] = r-1;
            } else {
                l = mid+1;
            }
        }
        if (nums[ans[0]] == target && nums[ans[1]] == target) return ans;
        return {-1,-1};
    }
};
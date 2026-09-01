class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0,
            h = nums.size() - 1,
            mn = INT_MAX;
        
        while (l <= h) {
            int mid = l + (h - l) / 2;

            if (nums[mid] < mn) {
                mn = nums[mid];
            } 
            if (nums[l] <= nums[mid]) {
                if (nums[h] < nums[l]) {
                    l = mid+1;
                } else {
                    h = mid - 1;
                }
            } else {
                h = mid - 1;
            }

        }
        return mn;
    }
};
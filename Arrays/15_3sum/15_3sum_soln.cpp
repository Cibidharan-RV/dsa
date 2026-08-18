class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int n = nums.size();
        
        for (int i=0; i<n-2; ++i) {
            if (nums[i] > 0) break;  // sum of 3 positive  cannot be 0

            if (i > 0 && nums[i] == nums[i-1]) {
                continue;
            }
            int l = i+1, r = n-1;
            while (l < r) {
                int sum = nums[l] + nums[r] + nums[i];
                if (sum == 0) {
                    vector<int> temp = {nums[i], nums[l], nums[r]};
                    ans.push_back(temp);
                    while (l < r && nums[l] == nums[l+1]) l+=1;
                    while (r > l && nums[r] == nums[r-1]) r-=1;
                    l+=1;
                    r-=1;
                } else if (sum > 0) {
                    r-=1;
                } else {
                    l+=1;
                }
            }
        }
        return ans;
    }
};
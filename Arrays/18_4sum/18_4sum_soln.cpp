class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        vector<vector<int>> ans;
        // 4 sum-------------------------------------------------------------
        for (int i=0; i<n-3; ++i) {
            // pruning invalid cominations...
            if (i>0 && nums[i] == nums[i-1]) continue;
            if ((long long)nums[i] + nums[i+1] + nums[i+2] + nums[i+3] > target) break;
            if ((long long)nums[i] + nums[n-1] + nums[n-2] + nums[n-3] < target) continue;

            // 3 sum----------------------------------------
            for (int j=i+1; j<n-2; ++j) {
                // pruning invlaid combinations...

                if (j>i+1 && nums[j] == nums[j-1]) continue;
                if ((long long)nums[i] + nums[j+1] + nums[j+2] + nums[j] > target) break;
                if ((long long)nums[i] + nums[n-1] + nums[n-2] + nums[j] < target) continue;

                int l = j+1, 
                    r = n-1;

                // 2 sum-----------------
                while (l < r) {
                    long long sum = (long long)nums[i]+nums[j]+nums[l]+nums[r];
                    if (sum == target) {
                        ans.push_back({nums[i], nums[j], nums[l], nums[r]});
                        while (l < r && nums[l+1] == nums[l]) l+=1;
                        while (l < r && nums[r-1] == nums[r]) r-=1;
                        l+=1;
                        r-=1;
                    } else if (sum > target) {
                        r-=1;
                    } else {
                        l+=1;
                    }
                } 
            }
        }
        return ans;
    }
};
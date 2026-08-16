class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int n = floor(nums.size()/3);
        ans.reserve(2);
        unordered_map<int, int> count;
        for (int i=0; i<nums.size(); ++i) {
            if (count[nums[i]]) count[nums[i]] += 1;
            else count[nums[i]] = 1;
            if (count[nums[i]] > n && nums[i] != ans[0]) {
                ans.push_back(nums[i]);
            }
            if (ans.size()==2) return ans;
        }

        return ans;
    }
};
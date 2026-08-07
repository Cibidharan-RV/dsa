//169. Majority Element

class Solution {
public:

    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        pair<int, int> max_f = {0, INT_MIN};
        int n = nums.size();
        for (int i=0; i<n; ++i) {
            
            if (freq.find(nums[i]) == freq.end()) freq[nums[i]] = 1;
            else freq[nums[i]]++;

            if (freq[nums[i]] > n/2) return nums[i];
            if (freq[nums[i]] > max_f.second) {
                max_f = make_pair(nums[i], freq[nums[i]]);
            }
        }
        return max_f.first;
    }
};
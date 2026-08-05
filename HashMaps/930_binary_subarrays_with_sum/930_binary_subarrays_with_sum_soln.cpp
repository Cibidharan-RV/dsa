class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        vector<int> freq(nums.size()+1, 0);
        int pres = 0, count = 0;
        ++freq[0];
        for (int i=0; i < nums.size(); i++) {
            pres += nums[i];
            if (pres >= goal)
                count += (freq[pres - goal]);
            ++freq[pres];
        }
        return count;
    }
};
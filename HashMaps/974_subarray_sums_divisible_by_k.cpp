class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int> map(k, 0);
        int count = 0, pres = 0;
        int idx;
        map[0] = 1;
        int n = nums.size();
        for (int i=0; i < n; i++) {
            pres += nums[i];
            idx = pres % k;
            idx = (idx < 0) ? idx + k : idx;
            count += map[idx];
            ++map[idx];
        }
        return count;
    }
};
class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        if (nums.size() < 2) return false;

        unordered_map<int, int> rem;
        rem[0] = -1;

        for (int i = 0; i < nums.size(); i++) {
            if (i > 0)
                nums[i] += nums[i - 1];

            int crem = nums[i] % k;

            if (rem.count(crem)) {
                if (i - rem[crem] >= 2)
                    return true;
            } else {
                rem[crem] = i;
            }
        }

        return false;
    }
};
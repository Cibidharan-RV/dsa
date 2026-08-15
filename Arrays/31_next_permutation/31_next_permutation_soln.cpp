class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if (nums.size() <= 2) {
            reverse(nums.begin(), nums.end());
            return;
        }
        int anc = 0;
        for (int i=nums.size()-2; i>=0; --i) {
            if (nums[i] < nums[i+1]) {
                anc = i;
                break;
            } else if (i==0) {
                reverse(nums.begin(), nums.end());
                return;
            }
        }
        int succ = anc+1;
        for (int i=anc+1; i<nums.size(); ++i) {
            if (nums[anc] < nums[i] && nums[i] < nums[succ]) {
                succ = i;
            }
        }
        swap(nums[anc], nums[succ]);
        sort(nums.begin() + anc + 1, nums.end());
    }
};
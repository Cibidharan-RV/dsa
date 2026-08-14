class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> n(nums.size());
        int o=1, e=0;
        for (int i=0; i < nums.size(); ++i) {
            if (nums[i] > 0){
                n[e] = nums[i];
                e += 2;
            } else {
                n[o] = nums[i];
                o += 2;
            }
        }
        return n;
    }
};
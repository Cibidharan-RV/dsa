class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int ii = 0;
        for (int i=0; i<nums.size(); ++i) {
            if (nums[i] != 0) {
                nums[ii] = nums[i];
                ii++;
            }            
        }
        for (ii = ii; ii<nums.size(); ++ii) {
            nums[ii]=0;
        }
    }
};
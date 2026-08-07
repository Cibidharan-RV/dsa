//75. Sort Colors

class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int ci = 0;
        for (int c=0; c<3; ++c) {
            for (int i=0; i<nums.size(); ++i) {
                if (nums[i] == c) {
                    swap(nums[ci], nums[i]);
                    ci++;
                }
            }
        }
    }
};
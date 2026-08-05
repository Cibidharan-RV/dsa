#include <vector>
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k %= nums.size();
        int n = nums.size();
        
        nums.insert(nums.end(), nums.begin(), nums.begin() + n - k);
        
        nums.erase(nums.begin(), nums.begin() + n - k);
    }
};
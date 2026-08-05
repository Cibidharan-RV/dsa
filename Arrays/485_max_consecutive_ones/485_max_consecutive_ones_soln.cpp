//485. Max Consecutive Ones
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxc=0, c =0;

        for (int n : nums) {
            if (n==1) {
                c++;
            } else {
                maxc = (maxc > c) ? maxc : c;
                c = 0;
            }
        }
        maxc = (maxc > c) ? maxc : c;
        return maxc;
    }
};
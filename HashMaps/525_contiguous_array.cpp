class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        vector<int> map(2*n+2, INT_MIN);
        map[1+n] = -1; // pres = 0, index = -1; inital key before array starts.
        int mx = 0, key, pres=0;

        for (int i=0; i<n; i++) {
            pres += nums[i];
            key = (2 * pres - i) + n;
            
            if (map[key]==INT_MIN) {
                map[key] = i;
            }
            mx = max(mx, i-map[key]);
        } 
        return mx;
    }
};
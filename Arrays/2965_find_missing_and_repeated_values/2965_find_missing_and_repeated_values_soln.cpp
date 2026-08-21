class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> hash(n*n + 1, 0);
        vector<int> ans(2);
        int sum = ((n*n)*(n*n + 1))/2;
        int summ = 0;
        
        for (const vector<int>& row : grid) {
            for (int k : row) {
                summ += k;
                hash[k] += 1;
                if (hash[k] >= 2) {
                    ans[0] = k;
                }
            }
        }
        ans[1] = sum - (summ - ans[0]);
        return ans;
    }
};
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> lis;

        for (int i=0; i < numRows; ++i) {
            vector<int> row(i+1, 1);

            for (int j=1; j<i; ++j) {
                row[j] = lis[i-1][j-1] + lis[i-1][j];
            }

            lis.push_back(row);
        }

        return lis;
    }
};
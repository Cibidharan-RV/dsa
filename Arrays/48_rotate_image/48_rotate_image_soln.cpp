class Solution {
    void transpose(vector<vector<int>>& m, int n) {
        for (int i=0; i<n; ++i) {
            for (int j=0; j<i; ++j) {
                swap(m[i][j], m[j][i]);
            }
        }
    }
    void reverse_rows(vector<vector<int>>& m, int n) {
        for (int i=0; i<n; ++i) {
            reverse(m[i].begin(), m[i].end());
        }
    }
public:
    void rotate(vector<vector<int>>& matrix) {
        int size = matrix.size();
        transpose(matrix, size);
        reverse_rows(matrix, size);
    }
};
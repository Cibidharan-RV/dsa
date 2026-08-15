class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int nrow = matrix.size();
        int ncol = matrix[0].size();
        
        bool row1 = false, 
             col1 = false;

        for (int i=0; i<nrow; ++i) {
            for (int j=0; j<ncol; ++j) {
                if (matrix[i][j] == 0) {
                    if (i==0) row1 = true;
                    if (j==0) col1 = true;
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        for (int j=1; j<nrow; ++j) {
            if (matrix[j][0] == 0) {
                for (int i=1; i<ncol; ++i) {
                    matrix[j][i] = 0;
                }
            }
        }
        for (int i=1; i<ncol; ++i) {
            if (matrix[0][i] == 0) {
                for (int j=1; j<nrow; ++j) {
                    matrix[j][i] = 0;
                }
            }
        }
        if (row1) fill(matrix[0].begin(), matrix[0].end(), 0);
        if (col1) {
            for (int i=0; i<nrow; ++i) {
                matrix[i][0] = 0;
            }
        }

    }
};
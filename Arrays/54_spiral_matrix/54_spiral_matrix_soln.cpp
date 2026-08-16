class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int
        ux = matrix[0].size(),
        lx = 0,
        uy = matrix.size(),
        ly = 0,
        x = 0, y = 0;
        
        vector<int> ans;
        ans.reserve(ux*uy);

        while ( ux > lx && uy > ly ) {
            
            
            for (x=lx; x<ux; ++x) {
                ans.push_back(matrix[ly][x]);
            }
            ly += 1;
            
            if (ly < uy) {
                for (y=ly; y<uy; ++y) {
                    ans.push_back(matrix[y][ux-1]);
                }
            }
            ux -= 1;

            if (lx <  ux && ly < uy) {    
                for (x=ux-1; x>=lx; --x) {
                    ans.push_back(matrix[uy-1][x]);
                }
            }
            uy -= 1;

            if (lx < ux && ly < uy) {
                for (int y = uy - 1; y >= ly; --y) {
                    ans.push_back(matrix[y][lx]);
                }
            }
            ++lx;
        }
        
        return ans;
    }
};
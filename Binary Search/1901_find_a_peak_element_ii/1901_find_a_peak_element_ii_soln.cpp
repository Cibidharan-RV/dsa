class Solution {
    vector<vector<int>>* matrixReference;
    int columns, rows;

    int get(int x, int y) {
        if (x < 0 || x >= columns || y < 0 || y >= rows) {
            return -1;
        }
        return (*matrixReference)[y][x];
    }

public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        matrixReference = &mat;
        columns = mat[0].size();
        rows = mat.size();
        int x = 0, y = 0;

        while (x < columns && y < rows) {
            int currentValue = get(x, y);

            if (get(x + 1, y) > currentValue)
            	x++;
            else if (get(x, y - 1) > currentValue)
            	y--;
            else if (get(x - 1, y) > currentValue)
            	x--;
            else if (get(x, y + 1) > currentValue)
            	y++;
            else
            	return {y, x};
        }

        return {-1, -1};
    }
};
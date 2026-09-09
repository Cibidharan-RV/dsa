class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low = 0,
            columns = matrix[0].size(),
            high = matrix.size() * matrix[0].size() - 1;
        
        while (low <= high) {
            size_t middle = (high + low) / 2;
            int middle_vlaue = matrix[middle / columns][middle % columns];
            if (target == middle_vlaue) return true;
            if (target < middle_vlaue) {
                high = middle-1;
            } else {
                low = middle+1;
            }
        } 
        return false;
    }
};
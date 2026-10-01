class Solution {
    String word;
    int rows;
    int cols;
    public boolean exist(char[][] board, String word) {
        this.word = word;
        this.cols = board[0].length;
        this.rows = board.length;
        boolean ans = false;
        for (int j=0; j<rows; ++j) {
            for (int i=0; i<cols; ++i) {
                if (board[j][i] == word.charAt(0)) {
                    if (backtrack(board, i, j, 0)) return true;
                }
            }
        }
        return false;
    }
    boolean backtrack(char[][] b, int i, int j, int c) {
        if (c == word.length()) return true;
        if (i < 0 || i >= cols || j < 0 || j >= rows) return false;
        
        if (b[j][i] == word.charAt(c)) {
            c++;
            b[j][i] -= 26;
            boolean isNextCharPresent = 
            (
                backtrack(b, i  , j-1, c) ||
                backtrack(b, i  , j+1, c) ||
                backtrack(b, i+1, j  , c) ||
                backtrack(b, i-1, j  , c)
            );
            b[j][i] += 26;
            return isNextCharPresent;

        }
        return false;
    }
}
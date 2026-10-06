class Solution {
    static char[][] board;
    static boolean[][] row;
    static boolean[][] col;
    static boolean[][] box;

    public void solveSudoku(char[][] board) {
        row = new boolean[9][9];
        col = new boolean[9][9];
        box = new boolean[9][9];
        this.board = board;
        for (int i=0; i<9; ++i) {
            for (int j=0; j<9; ++j){
                if (board[i][j] != '.') {
                    place(j, i, board[i][j] - 1 - '0');
                }
            }
        }
        check(0, 0);
        
    }
    static boolean check(int x,int y) {
        if (x==9) {
            return check(0, y+1);
        }
        if (y==9) {
            return true;
        }
        if (board[y][x] != '.') {
            return check(x+1, y);
        }
        if (x <= 8) {
            for (int i=0; i<9; i++) {

                if (checkAndPlace(x, y, i)) {
                    if (check(x+1, y)) {
                        return true;
                    }
                    remove(x, y, i);
                }
            }
        }
        return false;
    }
    static boolean checkAndPlace(int x, int y, int num) {
        if (!row[y][num] && !col[x][num] && !box[x/3 + (y/3)*3][num]) {
            place(x, y, num);
            return true;
        }
        return false;
    }
    static void place(int x, int y, int num) {
        row[y][num] = true;
        col[x][num] = true;
        box[x/3 + (y/3)*3][num] = true;
        board[y][x] = (char)(num+1 + '0');
    }
    static void remove(int x, int y, int num) {
        row[y][num] = false;
        col[x][num] = false;
        box[x/3 + (y/3)*3][num] = false;
        board[y][x] = '.';
    }
}
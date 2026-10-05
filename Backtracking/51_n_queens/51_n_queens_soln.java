class Solution {
    static List<List<String>> boards;
    static boolean[] diag1;
    static boolean[] diag2;
    static boolean[] cols;
    static int n;
    static char[][] qun;

    public List<List<String>> solveNQueens(int n) {
        this.n = n;
        boards = new ArrayList<>(n);
        diag1 = new boolean[2*n-1];
        diag2 = new boolean[2*n-1];
        cols = new boolean[n];
        qun = new char[n][n];
        for (int i=0; i<n; ++i) {
            Arrays.fill(qun[i], '.');
            qun[i][i] = 'Q';
        }
        backtrack(0, 0, new ArrayList<>(n));
        return boards;
    }
    static boolean checkAndPlace(int x, int y) {
        if (!cols[x] && !diag1[x+y] && !diag2[n-1+(x-y)]) {
            cols[x] = true;
            diag1[x+y] = true;
            diag2[(x-y)+n-1] = true;
            return true;
        }
        return false;
    }
    static void remove(int x, int y) {
        cols[x] = false;
        diag1[x+y] = false;
        diag2[(x-y)+n-1] = false;
    }
    public static void backtrack(int x, int y, ArrayList<String> board) {
        if (y == n) {
            boards.add(new  ArrayList<>(board));
            return;
        }
        if (x >= n) return;
        if (checkAndPlace(x,y)) {
            board.add(new String(qun[x]));
            backtrack(0, y+1, board);
            board.remove(board.size() - 1);
            remove(x, y);
        }
        backtrack(x+1, y, board);
    }
}
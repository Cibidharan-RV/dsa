class Solution {
    
    static void genP(int open, int close, StringBuilder cur, int n, List<String> ans) {
        if (cur.length() == 2*n) {
            ans.add(cur.toString());
            return;
        }
        if (open < n) {
            cur.append("(");
            genP(open+1, close, cur, n, ans);
            cur.deleteCharAt(cur.length() - 1);
        }
        if (open > close) {
            cur.append(")");
            genP(open, close+1, cur, n, ans);
            cur.deleteCharAt(cur.length() - 1);
        } 
    }
    public List<String> generateParenthesis(int N) {
        StringBuilder s = new StringBuilder();
        List<String> ans = new ArrayList<>();
        genP(0, 0, s, N, ans);

        return ans;
    }
}
class Solution {
    static List<String> ans;
    static String num;
    static int target;
    static int len;

    public List<String> addOperators(String num, int target) {
        this.num = num;
        this.target = target;
        this.len = num.length();
        this.ans = new ArrayList<>();

        StringBuilder cur = new StringBuilder();
        backtrack(cur, 0, 0, 0, false);

        return ans;
    }

    static void backtrack(StringBuilder cur, int i, long m, long s, boolean started) {

        if (i == len) {
            if (started && s + m == target) {
                ans.add(cur.toString());
            }
            return;
        }

        long number = 0;
        int start = cur.length();

        for (int j = i; j < len; j++) {

            if (j > i && num.charAt(i) == '0') {
                break;
            }

            number = number * 10 + (num.charAt(j) - '0');

            if (!started) {
                cur.append(num, i, j + 1);

                backtrack(cur, j + 1, number, 0, true);

                cur.setLength(start);
                continue;
            }

            // +
            cur.append('+').append(num, i, j + 1);
            backtrack(cur, j + 1, number, s + m, true);
            cur.setLength(start);

            // -
            cur.append('-').append(num, i, j + 1);
            backtrack(cur, j + 1, -number, s + m, true);
            cur.setLength(start);

            // *
            cur.append('*').append(num, i, j + 1);
            backtrack(cur, j + 1, m * number, s, true);
            cur.setLength(start);
        }
    }
}
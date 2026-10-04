class Solution {
    static String[] key = new String[] { "",
            "",              "abc",            "def", // 1    2   3
            "ghi",           "jkl",            "mno", // 4    5   6
            "pqrs",          "tuv",            "wxyz" // 7    8   9
        };
    static List<String> seqs;
    static String digs;
    static int len;
    public List<String> letterCombinations(String digits) {
        seqs = new ArrayList<>();
        len = digits.length();
        digs = digits;
        func(new StringBuilder(), 0);
        return seqs;
    }
    static void func(StringBuilder seq, int i) {
        if (i == len) {
            seqs.add(new String(seq));
            return;
        }
        for (int x = 0; x < key[get(i)].length(); ++x) {
            seq.append(key[get(i)].charAt(x));
            func(seq, i+1);
            seq.deleteCharAt(seq.length()-1);
        }
    }
    static int get(int i) {
        return digs.charAt(i) - '0';
    }
}
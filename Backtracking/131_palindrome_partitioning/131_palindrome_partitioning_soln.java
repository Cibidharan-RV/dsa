class Solution {
    List<List<String>> p;
    String s;
    Boolean[][] memo;
    public List<List<String>> partition(String s) {
        this.p = new ArrayList<>();
        this.s = s;
        this.memo = new Boolean[s.length()][s.length()];
        func(0, new ArrayList<>());
        return p;
    }
    void func(int start, ArrayList<String> parts) {
        if (start == s.length()) {
            p.add(new ArrayList<>(parts));
            return;
        }

        for (int end = start; end < s.length(); ++end) {
            if (isPalindrome(start, end)) {
                parts.add(s.substring(start, end+1));
                func(end + 1, parts);
                parts.remove(parts.size()-1);
            }
        }
    }
    boolean isPalindrome(int start, int end) {
        if (start >= end) return true;
        if (memo[start][end] != null) return memo[start][end];

        return memo[start][end] = (
            s.charAt(start) == s.charAt(end)
            &&
            isPalindrome(start+1, end-1)
        );
    }
}
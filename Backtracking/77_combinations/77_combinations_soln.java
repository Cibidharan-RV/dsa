class Solution {
    List<List<Integer>> coms;
    int k;
    void findComs(int N, int n, ArrayList<Integer> cur) {

        if (cur.size() == k) {
            coms.add(new ArrayList<>(cur));
            return;
        }

        cur.add(n);
        findComs(N, n+1, cur);
        cur.remove(cur.size() - 1);

        if (N - n+1 == k - cur.size()) return;

        findComs(N, n+1, cur);

    }

    public List<List<Integer>> combine(int n, int k) {
        int total = 1;
        int r = Math.min(k, n - k);
        this.k = k;

        for (int i = 1; i <= r; i++) {
            total = total * (n - r + i) / i;
        }
        coms = new ArrayList<>(total);

        findComs(n, 1, new ArrayList<Integer>());

        return coms;
    }
}
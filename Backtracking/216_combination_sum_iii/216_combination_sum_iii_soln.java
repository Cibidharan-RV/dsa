class Solution {
    static List<List<Integer>> combs;
    static int num;

    public List<List<Integer>> combinationSum3(int k, int n) {
        if (n > 45 || n == 1) return new ArrayList<>();
        num = k;
        combs = new ArrayList<>();

        func(new ArrayList<>(), n, 1);
        return combs;
    }
    public static void func(ArrayList<Integer> comb, int rem, int i) {
        if (num == comb.size()) {
            if (rem == 0)
                combs.add(new ArrayList<>(comb));
            return;
        }
        if (i > rem || i > 9) return;
        comb.add(i);

        func(comb, rem-i, i+1);

        comb.remove(comb.size() - 1);

        func(comb, rem, i+1);
    }
}
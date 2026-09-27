class Solution {
    List<List<Integer>> set;

    void genS(int[] nums, ArrayList<Integer> cur, int i, int n) {
        if (i == n) {
            set.add(new ArrayList<>(cur));
            return;
        }

        cur.add(nums[i]);
        genS(nums, cur, i+1, n);
        cur.remove(cur.size() - 1);

        genS(nums, cur, i+1, n);

    }

    public List<List<Integer>> subsets(int[] nums) {
        int n = nums.length;
        set = new ArrayList<>(1 << n);

        genS(nums, new ArrayList<>(), 0, n);
        return set;
    }
}
class Solution {
    static List<List<Integer>> subsets;
    static int[] freq;

    public List<List<Integer>> subsetsWithDup(int[] nums) {
        subsets = new ArrayList<>();
        freq = new int[21];

        for (int num : nums) {
            freq[num+10] += 1;
        }

        func(new ArrayList<>(), 0);
        return subsets;
    }
    public static void func(ArrayList<Integer> subset, int i) {
        if (i > 20) {
            subsets.add(new ArrayList<>(subset));
            return;
        }

        for (int f = 0; f <= freq[i]; ++f) {
            for (int insert = 0; insert < f; insert++) {
                subset.add(i-10);
            }

            func(subset, i+1);
            
            for (int remove = 0; remove < f; ++remove) {
                subset.remove(subset.size() - 1);
            }
        }
    }
}
class Solution {
    List<List<Integer>> combs;
    int target;
    int len;
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        combs = new ArrayList<>();
        this.target = target;
        this.len = candidates.length;
        findCombinationSum(candidates, new ArrayList<>(), 0, 0);
        return combs;
    }
    void findCombinationSum(int[] candidates, List<Integer> seq, int idx, int sum) {
        if (sum == target) {
            combs.add(new ArrayList<>(seq));
            return;
        }
        if (idx >= len)
            return;
        if (target - sum >= candidates[idx]) {
            seq.add(candidates[idx]);
            if (target - sum == candidates[idx])
                findCombinationSum(candidates, seq, idx+1, sum + candidates[idx]);
            else
                findCombinationSum(candidates, seq,   idx, sum + candidates[idx]);
            seq.remove(seq.size() - 1);
        }
        findCombinationSum(candidates, seq, idx+1, sum);
    }
}
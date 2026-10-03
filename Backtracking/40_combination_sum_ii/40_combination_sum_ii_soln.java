class Solution {
    int[] freq;
    List<List<Integer>> combs;

    public List<List<Integer>> combinationSum2(int[] candidates, int target) {
        freq = new int[31];
        combs = new ArrayList<>();
        
        for (int i=0; i<candidates.length; ++i) {
            if (candidates[i] <= 30) 
                freq[candidates[i]] += 1;
        }
        
        func(1, new ArrayList<>(), target);
        return combs;
    }

    public void func(int i, ArrayList<Integer> comb, int target) {
        
        if (target == 0) {
            combs.add(new ArrayList<>(comb));
            return;
        }
        
        if (i > target) 
            return;
        
        int maxFreq = Math.min( target / i , freq[i] );

        for (int f = maxFreq; f >= 0; --f) {

            comb.ensureCapacity(comb.size() + f);
            for (int j = 0; j < f; ++j)
                comb.add(i);
            
            func(i+1, comb, target - i*f);
            
            for (int j = 0; j < f; ++j)
                comb.remove(comb.size() - 1);
        }
    }
}
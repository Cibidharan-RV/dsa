class Solution {
    
    List<List<Integer>> perm;
    boolean[] used;

    void findPerm(int[] nums, List<Integer> curP) {
        if (curP.size() == nums.length) {
            perm.add(new ArrayList<>(curP));
            return;
        }

        for (int j=0; j<nums.length; ++j) {
            if (!used[j]) {
                used[j] = true;
                curP.add(nums[j]);

                findPerm(nums, curP);
                
                curP.remove(curP.size() - 1);
                used[j] = false;
            }
        }
    }
    public List<List<Integer>> permute(int[] nums) {
        int total = nums.length;
        used = new boolean[nums.length];
        for (int x=2; x<nums.length; ++x) {
            total *= x;
        }
        perm = new ArrayList<>(total);
        findPerm(nums, new ArrayList<Integer>(nums.length));
        return perm;
    }
}
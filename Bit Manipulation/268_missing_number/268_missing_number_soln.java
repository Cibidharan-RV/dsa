class Solution {
    public int missingNumber(int[] nums) {
        int rem = (nums.length) % 4;
        if (rem == 0) rem = nums.length;
        else if (rem == 1) rem = 1;
        else if (rem == 2) rem = nums.length + 1;
        else if (rem == 3) rem = 0;
        for (int i : nums) {
            rem ^= i;
        }
        return rem;
    }
}
class Solution {
    public int hammingWeight(int n) {
        int hm = 0;
        while (n != 0) {
            n = n & (n -1);
            hm++;
        }
        return hm;
    }
}
class Solution {
    public int bitwiseComplement(int input) {
        if (input == 0) return 1;
        int n = input;
        n |= n >> 1;
        n |= n >> 2;
        n |= n >> 4;
        n |= n >> 8;
        n |= n >> 16;

        return input ^ n;
    }
}
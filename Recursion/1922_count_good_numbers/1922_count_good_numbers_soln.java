class Solution {
    long MOD  = 1000000007;
    int count(long n, long result, long base) {
        if (n == 0) {
            return (int)(result % MOD);
        }
        int c = (int)(n % 2);
        if (c == 1) {
            result = (result * base) % MOD;
        }
        base = (base * base) % MOD;

        return count(n / 2, result, base);
    }

    public int countGoodNumbers(long n) {
        if (n == 1) return 5;

        int c = (int)(n % 2);
        n -= c;
        n /= 2;
        if (c == 1) c = 5;
        else c = 1;

        return (int)((long)count(n, 1, 20) * c % MOD);
    }
}
class Solution {
    int[] memory;

    int fibfunc(int n) {
        if (n == 0) {
            return 0;
        } else if (n <= 2) {
            return 1;
        }
        if (memory[n-2] != 0) {
            return memory[n-2];
        }
        memory[n-2] = fibfunc(n-1) + fibfunc(n-2);
        return memory[n-2];
    }
    public int fib(int n) {
        if (n == 0) return 0;
        if (n == 1 || n == 2) return 1;
        memory = new int[n-1];
        return fibfunc(n);
    }
}
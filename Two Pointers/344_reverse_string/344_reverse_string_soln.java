class Solution {
    public void reverseString(char[] s) {
        int start = 0;
        int end = s.length - 1;
        char a;
        while (start < end) {
            a = s[start];
            s[start] = s[end];
            s[end] = a;
            start++;
            end--;
        }
    }
}
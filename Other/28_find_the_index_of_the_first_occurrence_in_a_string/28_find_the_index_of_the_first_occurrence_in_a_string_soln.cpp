// 28. Find the Index of the First Occurrence in a String

class Solution {
public:
    int strStr(string hs, string ndl) {
        size_t i=0, j=0, k;
        while (hs[i]) {
            j=0;
            k=i;
            while (ndl[j] && ndl[j] == hs[k]) {
                j++;
                k++;
                if (!(ndl[j])) return i;
            }
            i++;
        }
        return -1;
    }
};

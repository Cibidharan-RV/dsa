class Solution {
    
public:
    string removeOuterParentheses(string s) {
        bool isopen = false;
        int n = s.size(),
            i = 0,
            k = 0,
            nopen = 0;
        for (int i=0; i<n; ++i) {
            if (s[i] == '(') {
                if (!isopen) {
                    isopen = true;
                }
                else {
                    nopen += 1;
                    s[k++] = s[i];
                }
            }
            else {
                if (nopen == 0) {
                    isopen = false;
                }
                else {
                    nopen -= 1;
                    s[k++] = s[i];
                }
            }
        }
        s.resize(k);
        return s;
    }
};
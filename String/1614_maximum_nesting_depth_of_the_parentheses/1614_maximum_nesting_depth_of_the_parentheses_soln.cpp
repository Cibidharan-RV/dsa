class Solution {
public:
    int maxDepth(string s) {
        int open = 0;
        int mx_open = 0;
        for (int i=0; i<s.size(); ++i) {
            if (s[i] == '(') {
                open += 1;
            } else if (s[i] == ')') {
                if (open > mx_open) mx_open = open;
                open -= 1;
            }
        }
        return mx_open;
    }
};
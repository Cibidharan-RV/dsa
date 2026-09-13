class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size()) return false;
        bool found = false;
        for (int i = 0; i<s.size(); ++i) {
            if (s[i] == goal[0]) {
                found = true;
                for (int j=1; j<s.size(); ++j) {
                    if (s[(i+j)%s.size()] != goal[j]) {
                        found = false;
                        break;
                    }
                }
                if (found) return true;
            }
        }
        return found;
    }
};
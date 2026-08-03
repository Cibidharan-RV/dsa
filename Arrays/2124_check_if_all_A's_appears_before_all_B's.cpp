class Solution {
public:
    bool checkString(string s) {
        bool isB = false;
        for (char c : s) {
            if (c == 'b') isB = true;
            else if (c == 'a' && isB) return false;
        }
        return true;
    }
};
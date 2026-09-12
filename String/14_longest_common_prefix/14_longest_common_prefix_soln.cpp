class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0) return "";
        string prefix = strs[0];
        int end = 201;
        for (int j=1; j<strs.size(); ++j) {
            const string& s = strs[j];
            int i = 0;
            while (i < prefix.size() && i < s.size() && prefix[i] == s[i]) {
                i++;
            }
            if (i < end) {
                end = i;
                if (end == 0) return "";
            }
        }
        if (end != 201)
            prefix.resize(end);
        return prefix;
    }
};
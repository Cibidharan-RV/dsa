// 3. Longest Substring Without Repeating Characters

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> tabl;
        int l_max=0, l=0, last_dub=0;

        for (int i=0; i<s.size(); i++) {
            if (tabl.find(s[i]) == tabl.end()) {
                l++;
                tabl[s[i]] = i;
            } else {
                l_max = max(l, l_max);
                last_dub = max(tabl[s[i]], last_dub);
                l = i - last_dub;
            }
            tabl[s[i]] = i;
        }
        return max(l, l_max);
    }
};

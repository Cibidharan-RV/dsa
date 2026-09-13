class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        
        vector<int> ther(26, 0);

        for (int i=0; i<s.size(); i++) {
            ther[s[i]-'a']++;
            ther[t[i]-'a']--;
        }
        for (int i=0; i<26; i++)
            if (ther[i]) return false;
        return true;
    }
};
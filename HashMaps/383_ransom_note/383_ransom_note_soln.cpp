// 383. Ransom Note

class Solution {
public:
    bool canConstruct(string ramsonNote, string magazine) { // s=ramsonNote, t=magazine

        if (ramsonNote.size() > magazine.size()) return false;
        
        int ther[26] = {0};

        for (int i=0; i<magazine.size(); i++) {
            if (i<ramsonNote.size()) ther[ramsonNote[i]-'a']++;
            ther[magazine[i]-'a']--;
        }
        for (int i=0; i<26; i++)
            if (ther[i]>0) {
                return false;
            }
        return true;

    }
};

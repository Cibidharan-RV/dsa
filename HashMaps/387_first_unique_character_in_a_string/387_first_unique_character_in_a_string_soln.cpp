// 387. First Unique Character in a String

class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> arr(26, 0);
        int i;
        for (char ch : s) {
            arr[ch - 'a']++;
        }
        for (i=0; i<s.size(); i++) {
            if (arr[s[i]-'a'] == 1) return i;
        }
        return -1;
    }
};

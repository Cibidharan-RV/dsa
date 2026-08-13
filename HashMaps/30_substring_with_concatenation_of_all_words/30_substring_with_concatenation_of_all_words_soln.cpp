// 30. Substring with Concatenation of All Words

class Solution {
public:

    int process(
        string& s,
        int i,
        int ans_i,
        unordered_map<string,int>& need,
        int remaining,
        int wlen
    ) {

        if (remaining == 0)
            return ans_i;

        string cur = s.substr(i, wlen);

        if (need[cur] == 0)
            return -1;

        need[cur]--;

        int res = process(
            s,
            i + wlen,
            ans_i,
            need,
            remaining - 1,
            wlen
        );

        need[cur]++;

        return res;
    }

    vector<int> findSubstring(string s, vector<string>& words) {
        if (count(s.begin(), s.end(), s[0]) == s.length() && count(words.begin(), words.end(), words[0]) == words.size() && s.length() > words.size() && (words[0][0] == s[0])){
            vector<int> seq(s.length()-words.size()*words[0].length()+1);
            iota(seq.begin(), seq.end(), 0);
            return seq;
        }
        vector<int> ans;

        int m = words.size();

        if (m == 0)
            return ans;

        int wlen = words[0].length();
        int total = m * wlen;

        if (s.length() < total)
            return ans;

        unordered_map<string,int> base;

        for (string& w : words)
            base[w]++;

        for (int i = 0; i <= s.length() - total; i++) {

            unordered_map<string,int> need = base;

            int res = process(
                s,
                i,
                i,
                need,
                m,
                wlen
            );

            if (res >= 0)
                ans.push_back(res);
        }

        return ans;
    }
};

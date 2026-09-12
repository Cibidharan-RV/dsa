class Solution {
    void clear_unwanted_space(string& s) {
        int read = 0;
        int write = 0;
        while (s[read] == ' ') {
            read += 1;
        }
        for (read = read; read < s.size(); ++read) {
            if (read > 0 && s[read - 1] == ' ' && s[read] == ' ') continue;
            s[write++] = s[read];
        }
        if (s[write-1] == ' ') {
            write-=1;
        }
        s.resize(write);
    }
public:
    string reverseWords(string s) {
        clear_unwanted_space(s);
        int n = s.size();
        int word_size = 0;
        int i = 0;
        while (i < n) {
            while(i + word_size < n && s[i + word_size] != ' ') {
                word_size++;
            }
            reverse(s.begin() + i, s.begin() + i + word_size);
            i += word_size + 1;
            word_size = 0;
        }
        reverse(s.begin(), s.end());
        return s;
    }
};
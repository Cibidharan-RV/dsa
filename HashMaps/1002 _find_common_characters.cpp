class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> minFreq(26, INT_MAX);

        for (string& w : words){
            vector<int> freq(26, 0);
            for (char c: w) {
                freq[c-'a'] += 1;
            }
            for (int i=0; i<26; i++) {
                minFreq[i] =  min(minFreq[i], freq[i]);
            }
        }

        vector<string> output;
        for (int i=0; i<26; i++) {
            for (int j=0; j<minFreq[i]; j++) {
                output.push_back(string(1, (char)(i+97)));
            }
        }

        return output;
    }
};
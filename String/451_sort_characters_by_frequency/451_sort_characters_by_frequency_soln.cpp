class Solution {
public:
    string frequencySort(string s) {
        
        vector<int> freq(75, 0);  // cover all characters ascii 48 to 122
        string output = "";
        output.reserve(s.size());

        for (char ch: s) {      // counting freq
            freq[ch-'0']++;
        }

        vector<pair<char, int>> vec;    // filter out only letters in the input with their freq.
        for (int i=0; i<75; i++) {
            if (freq[i]!=0) {
                vec.push_back(make_pair((char)(i+'0'), freq[i]));
            }
        }
        // and sort them
        sort(vec.begin(), vec.end(),[](auto &a, auto &b) {return a.second > b.second;});

        // generate the output string.
        for (auto &p : vec) {
            output.append(p.second, p.first);
        }

        return output;

    }
};
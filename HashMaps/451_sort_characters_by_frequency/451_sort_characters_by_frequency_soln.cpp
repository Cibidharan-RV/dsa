// 451. Sort Characters By Frequency

class Solution {
public:
    string frequencySort(string s) {
        
        vector<int> freq(75, 0);
        string output = "";
        for (char ch: s) {
            freq[ch-'0']++;
        }
        vector<pair<char, int>> vec;

        for (int i=0; i<75; i++) {
            if (freq[i]!=0) {
                vec.push_back(make_pair((char)(i+'0'), freq[i]));
            }
        }
        sort(vec.begin(), vec.end(),[](auto &a, auto &b) {return a.second > b.second;});

        for (auto &p : vec) {
            output.append(p.second, p.first);
        }

        return output;

    }
};

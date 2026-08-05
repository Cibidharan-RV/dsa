class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        string key;
        for (string &p: strs) {
            key = p;
            sort(key.begin(), key.end());
            map[key].push_back(p);
        }
        
        vector<vector<string>> output;
        output.reserve(map.size());

        for (auto &p: map) {
            output.push_back(move(p.second));
        }

        return output;
    }
};
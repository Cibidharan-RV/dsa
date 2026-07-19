class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int map[2001] = {0};
        bool occu[2001];
        fill(occu, occu+2001, 0);
        for (int i=0; i<arr.size(); i++) {
            map[arr[i] + 1000]++;
        }
        for (int i=0; i<2001; i++) {
            if (map[i]==0) continue;
            if (occu[map[i]]==true){
                return false;
            }
            occu[map[i]] = true;
        }
        return true;
    }
};
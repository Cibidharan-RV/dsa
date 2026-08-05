class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int seen[1001];
        vector<int> output;
        for (int n : nums1) {
            seen[n]=1;
        }
        for (int n : nums2) {
            if (seen[n] == 1) {
                seen[n] = 2;
            }
        }
        for (int i=0; i<1001; i++) {
            if (seen[i] == 2) output.push_back(i);
        }
        return output;
    }
};
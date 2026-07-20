class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (!nums.size()) return 0;
        unordered_set<int> ns(nums.begin(), nums.end());
        int mx = INT_MIN;
        for (int x:ns) {
            if (ns.count(x-1)) continue;
            int count=1;
            while (ns.count(++x)) {
                count += 1;
            }
            mx = max(mx, count);
            if (mx == nums.size()) return mx;

        }
        return mx;
    }
};
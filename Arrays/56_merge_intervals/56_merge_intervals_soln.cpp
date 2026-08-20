class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<int> line(10001);
        vector<bool> zero_point(10001, false);
        int max = 0;

        for (vector<int> nums : intervals) {
            if (nums[0] == nums[1]) zero_point[nums[0]] = true; 
            line[nums[0]] += 1;
            line[nums[1]] -= 1;
            if (nums[1] > max) max = nums[1];
            
        }
        vector<vector<int>> ans;
        vector<int> cur(2, -1);
        int o=0;

        for (int i = 0; i <= max; ++i) {
            o += line[i];
            if (line[i] == 0 && !o && zero_point[i]) {
                ans.push_back({i, i});
                o = 0;
                continue;
            }
            if (line[i] > 0 && cur[0] == -1) cur[0] = i;
            else if (line[i] < 0 && !o) {
                cur[1] = i;
                ans.push_back(cur);
                cur[0] = -1;
                o = 0;
            }
        }
        return ans;
    }
};
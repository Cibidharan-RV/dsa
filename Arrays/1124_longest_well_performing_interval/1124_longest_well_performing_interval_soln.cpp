// 1124. Longest Well-Performing Interval

class Solution {
public:
    int longestWPI(vector<int>& hours) {

        int len = hours.size(), mxl = 0, l = 0;
        int pre = len+1;
        
        vector<int> map(2*len+2, -2);
        map[pre] = -1;
        for (int i=0; i<len; i++) {

            if (hours[i] > 8) {
                ++pre;
            }
            else --pre;

            if (pre > len+1) {
                l = i+1;
            } else if (map[pre-1] != -2) {
                l = i - map[pre - 1];
            }

            if (map[pre] == -2) {
                map[pre] = i;
            }
            mxl = max(mxl, l);
        }
        return mxl;
    }
};

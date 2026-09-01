class Solution {
    bool checkDay(vector<int>& bd, int m, int k, int day) {
        int fcount = 0, grps = 0;
        for (int d : bd) {
            if (d <= day) {
                fcount += 1;
                if (fcount == k) {
                    grps+=1;
                    fcount = 0;
                    if (grps >= m) return true;
                }
            } else {
                fcount = 0;
            }
        }
        return false;
    }
public:
    int minDays(vector<int>& bd, int m, int k) {
        if ((long long) m*k > bd.size()) return -1;
        auto [min, max] = minmax_element(bd.begin(), bd.end());
        int mid,
            l = *min,
            h = *max;
        while (l <= h) {
            mid = l + (h - l) / 2;
            if (checkDay(bd, m, k, mid)) {
                h = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return l;
    }
};
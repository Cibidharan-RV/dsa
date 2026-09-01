class Solution {
    bool isFine(vector<int>& piles, long long h, int i) {
        for (int num : piles) {
            h -= ((long long)num + i - 1) / i ;
            if (h<0) return false;
        }
        return true;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long sum = accumulate(piles.begin(), piles.end(), 0LL);

        int l =  max(1LL, (sum + h - 1) / h),
            r = *max_element(piles.begin(), piles.end()),
            mid;
        
        while (l <= r) {
            mid = l + (r - l) / 2;
            if (isFine(piles, h, mid)) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return l;
        
    }
};
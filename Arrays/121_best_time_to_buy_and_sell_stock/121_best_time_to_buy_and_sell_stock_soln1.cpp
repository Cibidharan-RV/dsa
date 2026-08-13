class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int mn = prices[0], p=0, mxp = 0;
        for (int i=0; i<prices.size(); ++i) {
            p = (prices[i] - mn);
            mxp = max(mxp, p);
            if (prices[i] < mn) mn = prices[i];
        }
        return mxp;
    }
};
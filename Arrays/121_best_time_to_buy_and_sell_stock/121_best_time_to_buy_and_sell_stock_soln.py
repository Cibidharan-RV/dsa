# 121. Best Time to Buy and Sell Stock

class Solution(object):
    def maxProfit(self, prices):
        mxp = 0
        mn = prices[0]
        for i in prices[1:]:
            cost = i - mn
            #mxp = max(cost,mxp)
            if cost>mxp:
                mxp = cost
            #mn = min(mn,i)
            if mn>i:
                mn = i
        return mxp

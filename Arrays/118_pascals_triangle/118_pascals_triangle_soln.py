# 118. Pascal's Triangle

class Solution(object):
    def generate(self, numRows):
        """
        :type numRows: int
        :rtype: List[List[int]]
        """
        l1 = [1]
        l2 = [1,1]
        if numRows == 1:
            return [[1]]
        lis = [l1,l2]
        for i in range(3,numRows+1):
            y=[1]
            for j in range(1,i-1):
                x = lis[i-2][j-1] + lis[i-2][j]
                y.append(x)
            y.append(1)
            lis.append(y)

        return lis


# 12. Integer to Roman

class Solution(object):
    def intToRoman(self, num):
        """
        :type num: int
        :rtype: str
        """
        roman = {
            0   : "",
            1   : "I",
            5   : "V",
            10  : "X",
            50  : "L",
            100 : "C",
            500 : "D",
            1000: "M"
        }
        rom=""
        n = str(num)
        val = 10**(len(n)-1)
        for dig in n:
            num = int(dig)
            if num ==0:
                pass
            elif num < 4:
                rom += roman[val]*num
            elif num == 4:
                rom += roman[val] + roman[val*10/2]
            elif num == 5:
                rom += roman[val*10/2]
            elif num < 9:
                rom += roman[val*10/2] + roman[val]*(num - 5)
            elif num == 9:
                rom += roman[val] + roman[val*10]
            val/=10
        return rom



# 9. Palindrome Number

class Solution(object):
    def isPalindrome(self, x):
        y = str(x)
        y_ = y[::-1]
        if y == y_:
            return True
        else: 
            return False

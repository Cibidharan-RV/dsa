# 125. Valid Palindrome

class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        ns=''
        for sub in s:
            if sub.isalnum():
                ns+=sub.lower()
            else:
                pass
        rng = int(len(ns)/2)
        ri = -1
        is_palindrome = True
        for i in range(rng):
            if ns[i]!=ns[ri]:
                is_palindrome = False
                break
            ri-=1
        if is_palindrome:
            return True
        else:
            return False

                


        

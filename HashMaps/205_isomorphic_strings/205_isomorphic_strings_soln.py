# 205. Isomorphic Strings

class Solution(object):
    def isIsomorphic(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        maa = dict()
        mpp = dict()

        for i in range(len(s)):
            if (s[i] not in maa):
                maa[s[i]] = t[i]
            else:
                if maa[s[i]] != t[i]:
                    return False
            if t[i] not in mpp:
                mpp[t[i]] = s[i]
            else:
                if mpp[t[i]] != s[i]:
                    return False
        return True
        

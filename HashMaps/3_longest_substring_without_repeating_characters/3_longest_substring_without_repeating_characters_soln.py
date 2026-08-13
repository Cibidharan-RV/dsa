# 3. Longest Substring Without Repeating Characters

class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        tabl = dict()
        l_max =0
        l = 0
        last_dub = 0
        for i in range(len(s)):
            if (tabl.get(s[i], -1) == -1):
                l += 1
                tabl[s[i]] = i
            
            else:
                # tabl[s[i]] = i
                l_max = max(l, l_max)
                last_dub = max(tabl.get(s[i]), last_dub)
                l = i - last_dub
                # print(i, '-', tabl.get(s[i]), '=', l)
            tabl[s[i]] = i
            # print(l_max, l, i, s[i])
        return max(l_max, l)
            

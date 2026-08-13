# 290. Word Pattern

class Solution(object):
    def wordPattern(self, pattern, s):
        """
        :type pattern: str
        :type s: str
        :rtype: bool
        """
        mapp = dict()
        seen = set()
        st = s.split()

        if len(st) != len(pattern):
            print("len mismatch", len(st), len(pattern))
            return False

        for i in range(len(pattern)):
            if pattern[i] not in mapp:
                if st[i] not in seen:
                    mapp[pattern[i]] = st[i]
                    seen.add(st[i])

                else:
                    return False

            else:
                
                if mapp[pattern[i]] != st[i]:
                    print("false")
                    print(pattern[i], mapp[pattern[i]], st[i])
                    return False
        return True
        

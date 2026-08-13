// 205. Isomorphic Strings

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        //vector<int> map1(256,INT_MIN);
        int map1[256];
        //vector<int> map2(256,INT_MIN);
        int map2[256];
        fill(begin(map1), end(map1), INT_MIN);
        fill(begin(map2), end(map2), INT_MIN);
        int ti, si;
        for (int i=0; i<t.size(); i++) {
            
            ti = t[i];
            si = s[i];
            if (map1[ti] == INT_MIN) {
                map1[ti] = ti - si;
                cout << ti << "   " << si << '\n';
            }
            else {
                cout << ti << "   " << si << '\n';
                if (map1[ti] != (ti - si)) {
                    return false;
                }
            }
            if (map2[si] == INT_MIN) {
                map2[si] = ti - si;
                cout << ti << " ++  " << si << '\n';

            } else {
                cout << ti << "  -- " << si << '\n';
                if (map2[si] != ti - si) {
                    return false;
                }
            }
        }
        return true;
    }
};

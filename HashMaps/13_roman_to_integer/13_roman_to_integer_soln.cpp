// 13. Roman to Integer

class Solution {
public:
    int romanToInt(string s) {
        /* unordered_map<char, int> tabl = {
            { 'M'  , 1000 },
            { 'D'  ,  500 },
            { 'C'  ,  100 },
            { 'L'  ,   50 },
            { 'X'  ,   10 },
            { 'V'  ,    5 },
            { 'I'  ,    1 }
        };*/
        int num =0;
        for (int i=0; i<s.size(); i++) {
            int cur = value(s[i]); //tabl[s[i]];
            int next = value(s[i+1]); //tabl[s[i + 1]];
            if (cur < next) {
                num += (next - cur);
                i++;
            } else if (cur) {
                num += cur;
            }
        }
        return num;
    }
private:
    int value(char c) {
        switch(c) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }
};

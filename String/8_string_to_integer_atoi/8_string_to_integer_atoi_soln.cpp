class Solution {
    long long num; 
    int sign;
public:
    int myAtoi(string s) {
        sign = 1;
        num = 0;
        int x=0;
        for (; x<s.size(); ++x) {
            int i = s[x];
            if (i == 32) continue;       // SPACE
            else if (i == 45) {          // MINUS
                sign = -1;
                x+=1;
                break;
            }
            else if (i == 43) {          // PLUS
                x+=1;
                break;
            }
            else if (i >= 48 && i <= 57) {// DIGIT
                num += i - '0';
                x+=1;
                break;
            } 
            else {
                return num*sign;
            }
        }
        for (; x < s.size(); x++) {
            int i = s[x];
            if (i >= 48 && i <= 57) {
                num *= 10;
                num += i - '0';
                if (num > INT_MAX) {
                    if (sign > 0) return INT_MAX;
                    return INT_MIN;
                }
            }
            else return num*sign;
        }
        return num*sign;
    }
};
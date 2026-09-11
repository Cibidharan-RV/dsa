class Solution {
public:
    string largestOddNumber(string num) {
        int i = num.size()-1;
        while (i >= 0 && (num[i] - '0') % 2 == 0) i -= 1;
        if (i<0) return ""; 
        num.erase(i+1);
        return num;
    }
};
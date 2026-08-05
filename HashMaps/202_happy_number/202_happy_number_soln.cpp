class Solution {
public:
    unordered_set<int> seen;
    bool isHappy(int n) {
        if (seen.count(n)) return false;
        seen.insert(n);
        if (n==1) return true;
        int sqSum = 0;
        while (n>=1) { 
            int digit = n%10;
            sqSum += digit*digit;
            n/=10;
        }
        return isHappy(sqSum);
    }
};
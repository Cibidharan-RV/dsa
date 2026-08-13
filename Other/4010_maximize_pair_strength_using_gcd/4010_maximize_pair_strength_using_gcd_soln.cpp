// 4010. Maximize Pair Strength Using GCD

class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long ans=INT_MIN;
        for (int i=0; i<nums.size()-1; ++i) 
        for (int j=i+1; j < nums.size(); ++j) {
            long long x, y;
            if (nums[i] > nums[j]) {
                x = nums[i];
                y = nums[j];
            }
            else {
                y = nums[i];
                x = nums[j];
            }
            long long xx = x, yy = y;
            
            long long temp;
            while (x!=y && x!=0 && y!=0) {
            //    cout << x << " " << y << "\n";
                x %= y;
                temp = y;
                y = x;
                x = temp;
                
            }
            if (x==0) x = y ;
            
            //cout << "x y" << x << " " << y<< " " << xx*yy << " " << x*x << "\n\n";
            
            long long gcd = (1LL * xx*yy)/(1LL*x*x);
            ans = (ans > gcd) ? ans : gcd;
            //cout << gcd << "\n";
        }
        return ans;
    }
};

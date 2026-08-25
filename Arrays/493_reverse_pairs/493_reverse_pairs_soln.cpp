class Solution {
    int count = 0;
    void merge(vector<int>& nums, int l, int mid, int r) {

        int j = mid+1;
        for (int i=l; i<=mid; ++i) {
            while (j<=r && nums[j]*2LL < nums[i]) {
                j++;
            }
            count += j - mid-1;
        }
  
        int i = l;
            j = mid+1;

        vector<int> temp;
        temp.reserve(r-l+1);
        
        while (i<=mid && j<=r) {
            
            if (nums[i] < nums[j]) {
                temp.push_back(nums[i++]);
            } else {
                temp.push_back(nums[j++]);
            }
        }
        while (i<=mid) {temp.push_back(nums[i++]);}
        while (j <= r) {temp.push_back(nums[j++]);}

        for (int k=l; k<=r; k++) {
            nums[k] = temp[k-l];
        }
    }


    void mergesort(vector<int>& nums, int l, int r) {
        if (l>=r) return;
        int mid = l + ((r-l)/2);
        mergesort(nums, l, mid);
        mergesort(nums, mid+1, r);
        merge(nums, l, mid, r);
    }
public:
    int reversePairs(vector<int>& nums) {
        mergesort(nums, 0, nums.size()-1);
        return count;
    }
};
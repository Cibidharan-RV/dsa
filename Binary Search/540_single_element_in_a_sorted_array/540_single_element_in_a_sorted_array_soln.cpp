class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        int l = 0,
            length = nums.size(),
            h = length - 1;

        if (h == 0) 
            return nums[0];
        
        if (nums[0] != nums[1]) 
            return nums[0];
        else if (nums[length-1] != nums[length-2]) 
            return nums[length-1];
        
        while (l<=h) {
            
            int mid = l + (h - l) / 2;
            int p = 2 * (mid % 2); // polarity of the mid
            
            if (
                mid < length - 1         && mid > 0 &&                  // check if mid is inside the array
                nums[mid] != nums[mid+1] && nums[mid] != nums[mid-1]    // check for uniquness.
            )   return nums[mid];
            
            if (nums[mid - p + 1] == nums[mid]) {   // go right
                l = mid + 1;
            } else {                                // go left
                h = mid - 1;
            }
        } 
        return -1;
    }
};
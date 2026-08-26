class Solution { 
public: 
    int search(vector<int>& nums, int target) { 
        int l = 0; 
        int r = nums.size() - 1; 
 
        while (l<=r) { 
            int mid = l + (r-l)/2; 
 
            if (nums[mid] == target) return true; 
            else  if (nums[l] == nums[mid] && nums[mid] == nums[r]){ 
                while (l < mid && nums[l] != target) ++l; 
                if (nums[l] == target) return true; 
                while (r > mid && nums[r] != target) --r; 
                if (nums[r] == target) return true; 
                return false;
            } else if (nums[l] <= nums[mid]) { 
                if (nums[l] <= target && target < nums[mid]) { 
                    r = mid - 1; 
                } else { 
                    l = mid + 1; 
                } 
            } else if (nums[l] > nums[mid]) { 
                if (nums[mid] < target && target <= nums[r]) { 
                    l = mid + 1; 
                } else { 
                    r = mid - 1; 
                } 
            }
        } 
        return false; 
    } 
};
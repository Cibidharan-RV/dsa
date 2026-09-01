class Solution {
    int get(vector<int>& nums, int i) {
        if (i < 0 || i >= nums.size()) return INT_MIN;
        return nums[i];
    }
public:
    int findPeakElement(vector<int>& nums) {
        int l = 0,
            r = nums.size() - 1,
            mid
            ;

        // tiny arrays 
        if (r==0) return 0;
        else if (r==1) {
            if (nums[0] > nums[1]) return 0;
            return 1;
        }

        // binary search algo
        while (l <= r) {

            int mid = l + (r - l) / 2;

            int middle_element = nums[mid],
                previous_element = get(nums, mid-1),
                next_element = get(nums, mid+1);

            if (previous_element < middle_element && middle_element < next_element) { // 0 1 2
                l = mid + 1;
            } else 
            if (previous_element > middle_element && middle_element > next_element) { // 2 1 0
                r = mid - 1;
            } else 
            if (previous_element < middle_element && middle_element > next_element) { // 0 2 1
                return mid;
            } else 
            if (previous_element > middle_element && middle_element < next_element) { // 2 0 1
                if (previous_element > next_element) r = mid - 1;
                else l = mid + 1;
            }

        }
        return r;
    }
};
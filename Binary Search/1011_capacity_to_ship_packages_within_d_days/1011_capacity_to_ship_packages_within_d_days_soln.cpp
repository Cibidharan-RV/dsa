class Solution {
    bool isFine(const vector<int>& weights, int days, int capacity) {
        int number_of_days = 1;
        int current_weight = 0;

        for (int weight : weights) {

            if (current_weight + weight > capacity) {
                number_of_days += 1;
                current_weight = weight;
        
                if (number_of_days > days) 
                    return false;
            } 
            else {
                current_weight += weight;
            }
        }
        return true;
    }

public:
    int shipWithinDays(vector<int>& weights, int days) {
        
        int low=0, high=0;
        
        for (int weight : weights) {
            high += weight;
            if (low<weight) low = weight;
        }

        while (low<=high) {
            int mid = low + (high - low) / 2;
        
            if (isFine(weights, days, mid)) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};
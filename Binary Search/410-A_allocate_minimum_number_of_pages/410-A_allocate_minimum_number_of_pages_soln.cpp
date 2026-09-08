class Solution {
	static bool isFeasible(vector<int>& books, int students, long long maxPages) {
		int studentCount = 1;
		long long currentPages = 0;
        
		for (int pages : books) {
			if (currentPages + pages > maxPages) {
				studentCount += 1;
				currentPages = pages;
			} else {
				currentPages += pages;
			}
            
			if (studentCount > students)
				return false;
		}
        
		return true;
	}

	long long binarySearch(
		vector<int>& books,
		int students,
		long long lowerBound,
		long long upperBound
	) {
		while (lowerBound <= upperBound) {
			long long middle = lowerBound + (upperBound - lowerBound) / 2;
                
			if (isFeasible(books, students, middle))
				upperBound = middle - 1;
			else
				lowerBound = middle + 1;
		}
        
		return lowerBound;
	}

public:
	int findPages(vector<int>& arr, int k) {
		if (arr.size() < k)
			return -1;
            
		long long lowerBound = INT_MIN;
		long long upperBound = 0;
        
		for (int pages : arr) {
			upperBound += pages;
			if (lowerBound < pages)
				lowerBound = pages;
		}
        
		return binarySearch(arr, k, lowerBound, upperBound);
	}
};
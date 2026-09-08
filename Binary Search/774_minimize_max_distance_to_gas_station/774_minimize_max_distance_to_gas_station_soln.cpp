class Solution {
	static bool isFeasible(vector<int>& stations, int maxStations, double maxDistance) {
		int requiredStations = 0;
        
		for (int i = 1; i < stations.size(); ++i) {
			int currentDistance = stations[i] - stations[i - 1];
            
			requiredStations += (int)ceil(currentDistance / maxDistance) - 1;
            
			if (requiredStations > maxStations)
				return false;
		}
        
		return true;
	}

	double binarySearch(
			vector<int>& stations,
			double lowerBound,
			double upperBound,
			int maxStations,
			bool (*condition)(vector<int>&, int, double)
		) {
		double answer = upperBound;
		double previousLowerBound, previousUpperBound;
        
		while (true) {
			previousLowerBound = lowerBound;
			previousUpperBound = upperBound;
            
			double middle = lowerBound + (upperBound - lowerBound) / 2;
            
			if (condition(stations, maxStations, middle)) {
				upperBound = middle;
				answer = upperBound;
			} else {
				lowerBound = middle;
			}
            
			if (previousLowerBound == lowerBound &&
				previousUpperBound == upperBound)
				break;
		}
        
		return answer;
	}

public:
	double minMaxDist(vector<int>& stations, int k) {
		int lowerBound = 0;
		int upperBound = INT_MIN;
        
		for (int i = 1; i < stations.size(); ++i) {
			int currentDistance = stations[i] - stations[i - 1];
            
			if (upperBound < currentDistance)
				upperBound = currentDistance;
		}
        
		return binarySearch(
			stations,
			lowerBound,
			upperBound,
			k,
			isFeasible
		);
	}
};
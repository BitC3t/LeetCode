#include<vector>
#include<algorithm>

using namespace std;

int lowerBound(vector<int> arr, int n, int x) {	
	int lowest = -1;
	int first = 0;
	int end = n - 1;

	if(*max_element(arr.begin(), arr.end()) < x) {
		return (n);
	}

	while(first <= end) {
		int mid = (first + end) / 2;
		if(arr[mid] >= x) {
			lowest = mid;
			end = mid - 1;
		} else {
			first = mid + 1;
		}
	}

	return lowest;
}

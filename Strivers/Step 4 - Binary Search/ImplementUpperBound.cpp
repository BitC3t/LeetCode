#include<vector>
#include<algorithm>

using namespace std;

int upperBound(vector<int> &arr, int x, int n){
	int upper = n;
	int first = 0;
	int end = n - 1;

	while(first <= end) {
		int mid = (first + end) / 2;
		if(arr[mid] > x) {
			upper = mid;
			end = mid - 1;
		} else {
			first = mid + 1;
		}
	}

	return upper;
}
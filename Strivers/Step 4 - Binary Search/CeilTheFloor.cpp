int getFloor(vector<int> &a, int n, int x) {
	int value = -1;
	int first = 0;
	int end = n - 1;

	while(first <= end) {
		int mid = (first + end) / 2;
		if(a[mid] >= x) {
			value = a[mid];
			end = mid - 1;
		} else {
			first = mid + 1;
		}
	}

	return value;
}

int getCeiling(vector<int> &a, int n, int x) {
	int value = -1;
	int first = 0;
	int end = n - 1;

	while(first <= end) {
		int mid = (first + end) / 2;
		if(a[mid] <= x) {
			value = a[mid];
			first = mid + 1;

		} else {
			end = mid - 1;
		}
	}

	return value;
}

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	pair<int, int> p;
    p.second = getFloor(a, n, x);
    p.first = getCeiling(a, n, x);

    return p;
}


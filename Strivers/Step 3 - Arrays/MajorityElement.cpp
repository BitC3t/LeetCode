#include <bits/stdc++.h>

int majorityElement(vector<int> v) {
	unordered_map<int, int> a;

	for(int i = 0; i < v.size(); i++) {
		a[v[i]] += 1;
	}

	for(pair<int, int> a1 : a) {
		if(a1.second > (v.size() / 2)) {
			return a1.first;
		}
	}

	return 0;
}
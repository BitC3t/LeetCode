#include <bits/stdc++.h>

using namespace std;

int lastPosition(vector<int> &arr, int n, int k) {
    int last = -1;
    int first = 0;
    int end = n - 1;

    while(first <= end) {
        int mid = (first + end) / 2;
        if(arr[mid] == k) {
            last = mid;
            first = mid + 1;
        } else if(arr[mid] > k) {
            end = mid - 1;
        } else {
            first = mid + 1;
        }
    }

    return last;
}

int firstPosition(vector<int> &arr, int n, int k) {
    int first = -1;
    int start = 0;
    int end = n - 1;

    while(start <= end) {
        int mid = (start + end) / 2;
        if(arr[mid] == k) {
            first = mid;
            end = mid - 1;
        } else if(arr[mid] > k) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return first;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int, int> p;
    p.first = firstPosition(arr, n, k);
    p.second = lastPosition(arr, n, k);

    return p;
}

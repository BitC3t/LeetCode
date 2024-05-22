#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

class Solution {
     public:
        int select(int arr[], int i, int n) {
            int ans = i;
            for(int j = i; j < n; j++) {
                if(arr[ans] > arr[j]) {
                    ans = j;
                }
            }

            return ans;
        } 

        void selectionSort(int arr[], int n) {
            for(int i = 0; i < n; i++) {
                int s1 = select(arr, i, n);
                swap(arr[i], arr[s1]);
            }
        }
};

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

class Solution {
    public:
        int partition(int arr[], int low, int high) {
            int i = 0; int j = 0;
            int part = arr[high];

            while(j <= high) {
                if(arr[j] < high) {
                    swap(arr[i], arr[j]);
                    i++;
                }
                
                j++;
            }

            swap(arr[i], arr[high]);
            return part;
        }


        void quickSort(int arr[], int low, int high) {
            if(low >= high) return;

            int part = partition(arr, low, high);
            quickSort(arr, low, part - 1);
            quickSort(arr, part + 1, high);
        }
};

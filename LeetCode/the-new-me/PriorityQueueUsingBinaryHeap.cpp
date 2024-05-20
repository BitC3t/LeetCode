#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int parent(int i) {
    return (i - 1) / 2;
}

int leftChild(int i) {
    return ((2 * i) + 1);
}

int rightChild(int i) {
    return ((2 * i) + 2);
}

void shiftUp(int i) {
    while (i > 0 && H[parent(i)] < H[i]) {
        swap(H[parent(i)], H[i]);
        i = parent(i);
    }
}

void shiftDown(int i) {
    int maxIndex = i;
    int l = leftChild(i);

    if (l <= s && H[l] > H[maxIndex]) {
        maxIndex = l;
    }
    int r = rightChild(i);

    if (r <= s && H[r] > H[maxIndex]) {
        maxIndex = r;
    }
    if (i != maxIndex) {
        swap(H[i], H[maxIndex]);
        shiftDown(maxIndex);
    }
}

void insert(int p) {
    s = s + 1;
    H[s] = p;
    shiftUp(s);
}

class Solution {
    public:
        int extractMax() {
            if(s==0) return INT_MIN;
            if(s==1) {
                s--;
                return H[0];
            }

            int largest = H[0];
            swap(H[0], H[s--]);
            shiftDown(0);
            return largest;
        }
};

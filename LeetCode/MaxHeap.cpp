#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void maxHeapify(vector<int>& a, int n) {
        int left = 2 * n + 1;
        int right = 2 * n + 2;

        int largest = n;

        if (left < a.size() && a[left] > a[largest]) {
            largest = left;
        }

        if (right < a.size() && a[right] > a[largest]) {
            largest = right;
        }

        if (largest != n) {
            std::swap(a[n], a[largest]);
            maxHeapify(a, largest);
        }
    }

    void printVector(const vector<int>& a) {
        for (int i = 0; i < a.size(); ++i) {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    void minHeap(vector<int>& a, int n) {
        int left = 2 * n + 1;
        int right = 2 * n + 2;

        int smallest = n;

        if (left < a.size() && a[left] < a[smallest]) {
            smallest = left;
        }

        if (right < a.size() && a[right] < a[smallest]) {
            smallest = right;
        }

        if (smallest != n) {
            std::swap(a[n], a[smallest]);
            minHeap(a, smallest);
        }
    
    }
};

int main() {
    Solution solution;
    std::vector<int> a = {4, 1, 3, 2, 16, 9, 10, 14, 8, 7};

    for (int i = a.size() / 2 - 1; i >= 0; --i) {
        solution.maxHeapify(a, i);
    } 

    solution.printVector(a);

    for (int i = a.size() / 2 - 1; i >= 0; --i) {
        solution.minHeap(a, i);
    }

    solution.printVector(a);
}
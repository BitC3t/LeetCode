#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void printVector(vector<int> &a) {
    for(int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }

    cout << "" << endl;
}

void solve(int t) {
    if(t == 1) {
       cout << "NO" << endl;
       return;
    }
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void printVector(vector<int> &a) {
    for(int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }

    cout << "" << endl;
}

void solve(int t) {
    if(t == 1) {
       cout << "NO" << endl;
       return;
    }

   vector<int> set1;
   vector<int> set2;


    if(t%2 == 0) {

   vector<int> set1;
   vector<int> set2;

        int sum1 = 0; int sum2 = 0;
        for(int i = 1; i <= t; i+=2) {
        if(sum1 < sum2) {
            set2.push_back(i);
            set1.push_back(i+1);
            sum1 += i+1;
            sum2 += i;
        } else {
            set1.push_back(i);
            set2.push_back(i+1);
            sum1 += i;
            sum2 += i+1;
        }

        if(sum1 != sum2) {
            cout << "NO" << endl;
            return;
        }

        cout << "YES" << endl;
        cout << set1.size() << endl;
        printVector(set1);
        cout << set2.size() << endl;
        printVector(set2);
        return;
    }}

    set1.push_back(1);
    set1.push_back(2);

    set2.push_back(3);
    
    int sum1 = 3; int sum2 = 3;
    for(int i = 4; i <= t; i+=2) {
        if(sum1 < sum2) {
            set2.push_back(i);
            set1.push_back(i+1);
            sum1 += i+1;
            sum2 += i;
        } else {
            set1.push_back(i);
            set2.push_back(i+1);
            sum1 += i;
            sum2 += i+1;
        }
    }

    if(sum1 != sum2) {
        cout << "NO" << endl;
        return;
    }

    cout << set1.size() << endl;
    printVector(set1);
    cout << set2.size() << endl;
    printVector(set2);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    solve(t);
}

    if(t%2 == 0) {
        
    }
    set1.push_back(1);
    set1.push_back(2);

    set2.push_back(3);
    
    int sum1 = 3; int sum2 = 3;
    for(int i = 4; i <= t; i+=2) {
        if(sum1 < sum2) {
            set2.push_back(i);
            set1.push_back(i+1);
            sum1 += i+1;
            sum2 += i;
        } else {
            set1.push_back(i);
            set2.push_back(i+1);
            sum1 += i;
            sum2 += i+1;
        }
    }

    if(sum1 != sum2) {
        cout << "NO" << endl;
        return;
    }

    cout << set1.size() << endl;
    printVector(set1);
    cout << set2.size() << endl;
    printVector(set2);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    solve(t);
}

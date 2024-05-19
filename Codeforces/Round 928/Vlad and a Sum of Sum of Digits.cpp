#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

int sumNum(int a) {
    int sum = 0;

    while(a > 0) {
        sum += a % 10;
        a /= 10;
    }

    return sum;
}

int main() {
    int n;

    cin >> n;

    while(n-- > 0) {
        int a;

        cin >> a;

        int sum = 0;

        int count = 1;
        int start = 1;

        while(true) {
            if(count == a + 1) {
                break;
            }

            sum += start;

            if(start == 9) {
                start = sumNum(count + 1);
            } else {
                start++;
            }

            count++;
        }

        cout << sum << endl;
    }
}
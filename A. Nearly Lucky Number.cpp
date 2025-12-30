#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    int luckyCount = 0;

    while (n != 0) {
        int digit = n % 10;
        if (digit == 4 || digit == 7) {
            luckyCount++;
        }
        n /= 10;
    }

    if (luckyCount == 0) {
        cout << "NO" << endl;
        return 0;
    }

    bool isLucky = true;
    int temp = luckyCount;
    while (temp != 0) {
        int d = temp % 10;
        if (d != 4 && d != 7) {
            isLucky = false;
            break;
        }
        temp /= 10;
    }

    if (isLucky) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

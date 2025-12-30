#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        string s;
        cin >> n >> s;

        int l = 0, r = n - 1;
        while (l < r && ((s[l] == '0' && s[r] == '1') || (s[l] == '1' && s[r] == '0'))) {
            l++;
            r--;
        }
        cout << (r - l + 1) << "\n";
    }
    return 0;
}

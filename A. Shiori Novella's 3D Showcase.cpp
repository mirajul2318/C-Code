#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n, m;
        cin >> n >> m;

        vector<string> grid(n);
        for(int i = 0; i < n; i++) {
            cin >> grid[i];
        }

        int flipsA = 0;
        int flipsB = 0;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                char expectedA = ((i + j) % 2 == 0) ? '0' : '1';
                char expectedB = ((i + j) % 2 == 0) ? '1' : '0';

                if(grid[i][j] != expectedA) flipsA++;
                if(grid[i][j] != expectedB) flipsB++;
            }
        }

        cout << min(flipsA, flipsB) << "\n";
    }

    return 0;
}

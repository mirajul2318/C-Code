#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        vector<bool> visited(n, false);
        vector<int> b;

        int i = 0;
        b.push_back(a[i]);
        visited[i] = true;

        while(true){
            vector<pair<int, int>> options; // {value, index}

            for(int j = i+1; j <= i+2 && j < n; j++){
                if(!visited[j]){
                    options.push_back({a[j], j});
                }
            }

            if(options.empty()) break;

            sort(options.begin(), options.end()); // value ছোট হলে আগে আসবে
            int next = options[0].second;
            visited[next] = true;
            b.push_back(a[next]);
            i = next;
        }

        for(int val : b){
            cout << val << " ";
        }
        cout << "\n";
    }

    return 0;
}

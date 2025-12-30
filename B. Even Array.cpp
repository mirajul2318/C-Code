/*#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int odd=0,even=0,e,o;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        if(n%2==0){
            e=n/2;
            o=n/2;
        }
        else if(n%2!=0){
            e=(n/2)+1;
            o=n/2;
        }
        if(even==e && odd==o){
            int c=0;
            for(int i=0;i<n;i++){
                if(i%2 != a[i]%2){
                   swap(a[i],a[i+1]);
                   c++;
                }
                else if(i%2 == a[i]%2){
                   continue;
                }
           }
           cout<<c<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }


    }
}*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        int evenWrong = 0, oddWrong = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (i % 2 != a[i] % 2) {
                if (i % 2 == 0) evenWrong++;
                else oddWrong++;
            }
        }

        if (evenWrong != oddWrong)
            cout << "-1" << endl;
        else
            cout << evenWrong << endl;
    }
    return 0;
}


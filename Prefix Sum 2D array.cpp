#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
int s[N][N];
long long pf[N][N];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>s[i][j];
            pf[i][j]=s[i][j] + pf[i-1][j] + pf[i][j-1] - pf[i-1][j-1];
        }
    }
    int q;
    cin>>q;
    while(q--){
       int sum=0;
       int a,b,c,d;
       cin>>a>>b>>c>>d;
       /*for(int i=a;i<=c;i++){
            for(int j=b;j<=d;j++){
               sum+=s[i][j];
            }
       }*/
       cout<<pf[c][d] - pf[a-1][d] - pf[c][b-1] + pf[a-1][b-1]<<endl;
    }
}

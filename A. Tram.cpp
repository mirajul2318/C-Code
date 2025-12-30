#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    int k[n];
    k[0]=b[0];
    for(int i=1;i<n;i++){
        k[i]=k[i-1]+b[i]-a[i];
    }
    int max=k[0];
    for(int i=1;i<n;i++){
        if(max<k[i])
            max=k[i];
    }
    cout<<max<<endl;
    return 0;
}

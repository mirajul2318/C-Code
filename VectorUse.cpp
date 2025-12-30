#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,k;
   cin>>n>>k;
   vector<int>v;
   for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
   } 
   while (k--)
   {
        v.erase(v.begin());
        reverse(v.begin(), v.end());
   }
   for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
   }
}
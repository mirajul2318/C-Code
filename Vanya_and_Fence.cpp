#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,h;
    cin>>n>>h;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int a=0;
    for(int i=0;i<v.size();i++){
        if(v[i]<=h){
            a++;
        }
        else{
            a+=2;
        }
    }
    cout<<a<<endl;
}
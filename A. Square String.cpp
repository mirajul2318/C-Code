#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int l=s.length();
        int c = 0;
        if(l%2 != 0){
            cout<<"NO"<<endl;
        }
        else if(l%2 == 0){
            for(int i=0,j=l/2;i<l/2;i++,j++){
                if(s[i]==s[j]){
                    c++;
                }
            }
            if(c==(l/2))
                cout<<"YES"<<endl;
            else{
            cout<<"NO"<<endl;
            }
        }
    }
}

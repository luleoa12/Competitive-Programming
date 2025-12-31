// December 30, 2025
// Translation

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string t1;
    string t2;
    cin>>t1;
    cin>>t2;
    string cur="";
    for(int i=t1.size()-1;i>-1;i--){
        cur+=t1[i];
    }
    if(cur==t2){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}


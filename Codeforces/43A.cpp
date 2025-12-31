// December 30, 2025
// Football

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    string t1="";
    string t2="";
    int s1=0;
    for(int i=0;i<n;i++){
        string cur;
        cin>>cur;
        if(t1==""){
            t1=cur;
        }
        if(cur==t1){
            s1++;
        }else{
            t2=cur;
        }
    }
    if(s1>n-s1){
        cout<<t1<<endl;
    }else{
        cout<<t2<<endl;
    }

    return 0;
}


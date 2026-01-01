// December 31, 2025
// Football

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin>>s;
    int count=0;
    char team=s[0];
    bool dangerous=false;
    for(int i=0;i<s.size();i++){
        if(count==7){
            dangerous=true;
            break;
        }
        if(s[i]==team){
            count++;
        }else{
            team=s[i];
            count=1;
        }
    }
    if(count>=7){
        dangerous=true;
    }
    if(dangerous){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}


// December 31, 2025
// Chat room

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    bool check1=false;
    bool check2=false;
    bool check3=false;
    bool check4=false;
    bool check5=false;
    string s;
    cin>>s;
    for(char c:s){
        if(c=='h')check1=true;
        else if(check1&&c=='e')check2=true;
        else if(check2&&!check3&&c=='l')check3=true;
        else if(check3&&c=='l')check4=true;
        else if(check4&&c=='o')check5=true;
    }
    if(check5){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}


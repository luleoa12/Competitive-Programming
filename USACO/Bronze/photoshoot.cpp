// January 4, 2026
// USACO 2022 US Open Contest, Bronze
// Problem 1. Photoshoot

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    string s;
    cin>>s;
    string cur;
    for(int i=0;i<s.size()-1;i+=2){
        if(s[i]=='G'&&s[i+1]=='H'){
            cur+='1';
        }else if(s[i]=='H'&&s[i+1]=='G'){
            cur+='0';
        }
    }
    
    int ans=1;
    int cow=cur[0];
    for(char c:cur){
        if(c!=cow){
            cow=c;
            ans++;
        }
    }
    if(cur[cur.size()-1]=='0'){
        ans--;
    }
    cout<<ans<<endl;

    return 0;
}


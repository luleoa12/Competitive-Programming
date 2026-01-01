// December 31, 2025
// k-String

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    cin>>k;
    string s;
    cin>>s;
    unordered_map<int,int> count;
    for(char c:s){
        count[c]++;
    }

    string cur="";
    for(auto &p:count){
        if(p.second%k!=0){
            cout<<-1<<endl;
            return 0;
        }else{
            for(int i=0;i<p.second/k;i++){
                cur+=p.first;
            }
        }
    }
    string ans="";
    for(int i=0;i<k;i++){
        ans+=cur;
    }
    cout<<ans<<endl;
    
    return 0;
}


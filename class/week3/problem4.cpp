// 10/3/2025
// https://usaco.org/index.php?page=viewproblem2&cpid=667

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("citystate.in","r",stdin);
    freopen("citystate.out","w",stdout);

    int n;
    cin>>n;
    unordered_map<string,int> check;
    vector<pair<string,string>> pairs;
    ll ans=0;
    for(int i=0;i<n;i++){
        string s1,s2;
        cin>>s1>>s2;
        s1=s1.substr(0,2);
        pairs.push_back({s1,s2});
    }

    for(auto &[c,s]:pairs){
        if(c!=s){ // because they need to come from different states
            ans+=check[s+c];
        }
        check[c+s]++;
    }
    cout<<ans<<endl;

    return 0;
}


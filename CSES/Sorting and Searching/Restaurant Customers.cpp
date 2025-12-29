// 12/28/2025
// Restaurant Customers

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<pair<int,int>> v; 
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        a--,b--;
        v.push_back(make_pair(a,1));
        v.push_back(make_pair(b,-1));
    }

    sort(v.begin(),v.end());
    int cur=0;
    int ans=0;
    for(auto t:v){
        cur+=t.second;
        ans=max(ans,cur);
    }
    cout<<ans<<endl;
    return 0;
}


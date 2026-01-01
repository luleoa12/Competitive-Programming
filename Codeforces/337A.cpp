// December 31, 2025
// Puzzles

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;
    vector<int> puzzles(m);
    for(int i=0;i<m;i++){
        cin>>puzzles[i];
    }
    sort(puzzles.begin(),puzzles.end());
    int ans=INT32_MAX;
    for(int i=0;i<m-n+1;i++){
        ans=min(ans,puzzles[n+i-1]-puzzles[i]);
    }
    cout<<ans<<endl;
    return 0;
}


// July 17, 2025
// USACO 2016 January Contest, Silver
// Problem 2. Subsequences Summing to Sevens

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("div7.in","r",stdin);
    freopen("div7.out","w",stdout);
    int n;
    cin>>n;
    vector<int> first(n,-1);
    int ans=0;
    first[0]=0;
    int cur=0;
    for(int i=1;i<=n;i++){
        int cow;
        cin>>cow;
        cur=(cow+cur)%7;
        if(first[cur]==-1){
            first[cur]=i;
        }else{
            ans=max(ans,i-first[cur]);
        }
    }
    cout<<ans<<endl;
    
    return 0;
}


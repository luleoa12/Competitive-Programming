// July 20, 2025
// USACO 2017 February Contest, Silver
// Problem 2. Why Did the Cow Cross the Road II

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("maxcross.in","r",stdin);
    freopen("maxcross.out","w",stdout);

    int n,k,b;
    cin>>n>>k>>b;
    vector<int> road(n);
    for(int i=0;i<b;i++){
        int x;
        cin>>x;
        road[x-1]=1;
    }
    int cur=0;
    int ans=999999999;
    for(int i=0;i<k;i++){
        cur+=road[i];
    }
    
    ans=min(ans,cur);
    int left=0;
    for(int right=k;right<n;right++){
        cur=cur-road[left]+road[right];
        left++;
        ans=min(ans,cur);
    }
    cout<<ans<<endl;
    return 0;
}


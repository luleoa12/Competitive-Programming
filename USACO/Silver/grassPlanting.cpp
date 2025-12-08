// 12/7/2025
// USACO 2019 January Contest, Silver
// Problem 1. Grass Planting

#include <bits/stdc++.h>
using namespace std;


int n;
vector<int> depth;
int main(){
    freopen("planting.in","r",stdin);
    freopen("planting.out","w",stdout);

    cin>>n;
    depth.resize(n);
    for(int i=0;i<n-1;i++){
        int a,b;
        cin>>a>>b;
        a--,b--;
        depth[a]++;
        depth[b]++;
    }
    int ans=-1;
    for(int num:depth){
        ans=max(ans,num);
    }
    cout<<ans+1<<endl;
    return 0;
}
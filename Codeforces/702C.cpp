// July 22, 2025
// Codeforces problem 702C - Cellular Network

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;
    vector<int> cities(n);
    vector<int> towers(m);
    for(int i=0;i<n;i++){
        cin>>cities[i];
    }
    for(int i=0;i<m;i++){
        cin>>towers[i];
    }

    int c1=0; 
    vector<int> dist(n, INT_MAX);
    int ans=-1;
    for(int i=0;i<n;i++){
        while(c1<m-1&&towers[c1+1]<=cities[i]){
            c1++;
        }
        dist[i]=min(dist[i],abs(cities[i]-towers[c1]));
    }

    c1=m-1;
    for(int i=n-1;i>=0;i--){
        while(c1>0&&towers[c1-1]>=cities[i]){
            c1--;
        }
        dist[i]=min(dist[i],abs(cities[i]-towers[c1]));
    }
    for(int i=0;i<n;i++){
        ans=max(ans, dist[i]);
    }
    cout<<ans<<endl;
    return 0;
}


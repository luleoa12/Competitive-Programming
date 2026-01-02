// January 1, 2026
// Fence

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    cin>>n>>k;
    int ans=0;

    vector<int> h(n);
    for(int i=0;i<n;i++)cin>>h[i];
    int cur=0;
    for(int j=0;j<k;j++){
        cur+=h[j];
    }
    int m=cur;
    for(int i=1;i<n-k+1;i++){
        cur-=h[i-1];
        cur+=h[i+k-1];
        if(cur<m){
            m=cur;
            ans=i;
        }
    }
    cout<<ans+1<<endl;
    return 0;
}


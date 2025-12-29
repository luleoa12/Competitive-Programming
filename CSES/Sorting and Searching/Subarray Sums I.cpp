// July 22, 2025
// CSES Problem Set: Sorting and Searching - Subarray Sums I

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=0;
    int sum=0;
    int r=-1;
    for(int l=0;l<n;l++){
        while(r+1<n&& sum+a[r+1]<=x){
            r++;
            sum+=a[r];
        }
        if(sum==x){
            ans++;
        }
        sum-=a[l];
    }
    cout<<ans<<endl;

    return 0;
}


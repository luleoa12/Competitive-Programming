// January 4, 2026
// USACO 2023 US Open Contest, Bronze
// Problem 3. Rotate and Shift

#include <bits/stdc++.h>
using ll = long long;

using namespace std;

int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k,t;
    cin>>n>>k>>t;
    vector<int> a(k+1);
    for(int i=0;i<k;i++){
        cin>>a[i];
    }
    a[k]=n;
    vector<int> ans(n);
    for(int i=0;i<k;i++){
        for(int j=a[i];j<a[i+1];j++){
            int shift=j-a[i]-t;
            int diff=a[i+1]-a[i];
            shift=(shift%diff+diff)%diff;
            ans[(a[i]+shift+t)%n]=j;
        }
    }
    for(int i=0;i<n;i++){
        if(i!=n-1){
            cout<<ans[i]<<" ";
        }else{
            cout<<ans[i]<<endl;
        }
    }

    return 0;
}


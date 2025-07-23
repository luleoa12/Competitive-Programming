// July 22, 2025
// Codeforces problem 279B - Books

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,t;
    cin>>n>>t;
    vector<int> books(n);
    for(int i=0;i<n;i++){
        cin>>books[i];
    }
    int r=-1;
    int sum=0;
    int ans=0;
    for(int l=0;l<n;l++){
        while(r+1<n && sum+books[r+1]<=t){
            r++;
            sum+=books[r];
        }
        ans=max(ans,r-l+1);
        sum-=books[l];
    }
    cout<<ans<<endl;

    return 0;
}


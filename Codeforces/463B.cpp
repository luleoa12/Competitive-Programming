// December 31, 2025
// Caisa and Pylons

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    int cur=0;
    vector<int> h(n);
    for(int i=0;i<n;i++){
        cin>>h[i];
    }
    int ans=h[0];
    for(int i=0;i<n-1;i++){
        cur+=(h[i]-h[i+1]);
        if(cur<0){
            ans+=abs(cur);
            cur=0;
        }
    }


    cout<<ans<<endl;
    return 0;
}


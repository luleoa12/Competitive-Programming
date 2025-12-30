// December 29, 2025
// Xenia and Ringroad

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;

    long long ans=0;
    int house=1;
    for(int i=0;i<m;i++){
        int a;
        cin>>a;
        if(a<house){
            ans+=n-house+a;
        }else{
            ans+=a-house;
        }
        house=a;
    }
    cout<<ans<<endl;
    return 0;
}


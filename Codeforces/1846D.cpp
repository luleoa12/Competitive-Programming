// July 16, 2025
// problem

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    for (int i=0; i<t;i++) {
        int n,d,h;
        cin>>n>>d>>h;
        vector<int> branches(n);
        for (int j=0;j<n;j++) {
            cin>>branches[j];
        }
        double ans=0.0;
        for (int j=0;j<n;j++){
            if(j!=n-1 && branches[j]!=branches[j+1]+1) {
                ans += (d*h/2.0);
            } else {
                ans += (d*h/2.0/4.0)+(d*h/2.0);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}


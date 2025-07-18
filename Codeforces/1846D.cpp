// July 16, 2025
// Codeforces problem 1846D - Rudolph and Christmas Tree	

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
            double area=0.5*d*h;
            if(j>0 && branches[j]<branches[j-1]+h) {
                int overlap_height = branches[j-1] + h - branches[j];
                double overlap_base = (1.0 * d * overlap_height) / (h*1.0);
                double overlap_area = 0.5 * overlap_base * overlap_height;
                ans += area - overlap_area;
            } else {
                ans += area;
            }
        }
        cout<<setprecision(10)<<ans<<endl;
    }
    return 0;
}


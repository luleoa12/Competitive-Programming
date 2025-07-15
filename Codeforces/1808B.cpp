// July 14, 2025
// Codeforces problem 1808B - Playing in a Casino

#include <bits/stdc++.h>
using ll = long long;

using namespace std;

int t;
int n,m;

int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>t;
    for (int i=0; i<t; i++) {
        cin>>n>>m;
        int ans=0;
        vector<vector<int>> deck(n, vector<int>(m, -1));
        for (int j=0; j<n; j++) {
            for (int k=0; k<m; k++){
                cin>>deck[j][k];
            }
        }
        for (int x1=0; x1<n; x1++) {
            for (int x2=x1+1; x2<n; x2++) {
                for (int y=0; y<m; y++) {
                    ans += abs(deck[x2][y]-deck[x1][y]);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}


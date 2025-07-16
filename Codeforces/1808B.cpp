// July 15, 2025
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
        vector<vector<int>> deck(n, vector<int>(m));
        for (int j=0; j<n; j++) {
            for (int k=0; k<m; k++){
                cin>>deck[j][k];
            }
        }
        long long ans=0;
        for (int i=0; i<m; i++) {
            vector<long long> temp;
            long long sum=0;
            for (int j=0; j<n; j++) {
                temp.push_back(deck[j][i]);
                sum += deck[j][i];
            }
            long long cur=0;
            sort(temp.begin(), temp.end());
            for (int j=0; j<n; j++) {
                cur += temp[j];
                ans += llabs(sum-cur - (n-1-j)*temp[j]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}


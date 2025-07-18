// July 17, 2025
// Codeforces problem 1914C - Quests

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        vector<int> b(n);
        for (int i=0; i<n;i++) {
            cin>>a[i];
        }
    
        for (int i=0; i<n;i++) {
            cin>>b[i];
        }
        int best_second = b[0];
        int first_total = a[0];
        int max_score=a[0]+best_second*(k-1);

        for (int z=1; z<min(n,k); z++) {
            best_second = max(best_second, b[z]);
            max_score = max(max_score, first_total + a[z] + best_second*(k-z-1));
            first_total += a[z];
        }
        cout << max_score << endl;
    }
    return 0;
}


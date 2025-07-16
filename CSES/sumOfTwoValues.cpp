// July 15, 2025
// CSES Problem Set: Sorting and Searching - Sum of Two Values

#include <bits/stdc++.h>
using ll = long long;

using namespace std;

int n,x;
map<int, int> m;
int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>x;
    int cur;
    vector<int> a(n);
    for (int i=0; i<n; i++) {
        cin>>a[i];
        int target = x-a[i];
        if (m.count(target)) {
            cout<<m[target]+1<<" "<<i+1<<endl;
            return 0;
        }
        m[a[i]] = i;

    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}


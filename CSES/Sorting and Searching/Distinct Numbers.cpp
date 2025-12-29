// July 14, 2025
// CSES Problem Set: Sorting and Searching - Distinct Numbers

#include <bits/stdc++.h>
using ll = long long;

using namespace std;

vector<int> nums;
int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x;
    cin>>n;
    for (int i=0; i<n; i++) {
        cin>>x;
        nums.push_back(x);
    }
    sort(nums.begin(), nums.end());
    int ans=1;
    for (int i=0; i<n-1; i++) {
        if (nums[i] != nums[i+1]) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}


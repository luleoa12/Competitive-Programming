// July 14, 2025
// Codeforces problem 863B - Kayaking

#include <bits/stdc++.h>
using ll = long long;

using namespace std;

int n,x;
vector<int> weights;
int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n;
    for (int i=0; i<n*2; i++) {
        cin>>x;
        weights.push_back(x);
    }
    sort(weights.begin(), weights.end());
    int ans=999999999;
    int temp=0;
    for (int i=0; i<n*2; i++) {
        for (int j=i+1; j<n*2; j++) {
            vector<int> kayaks;
            temp=0;
            for (int k=0; k<n*2; k+=1) {
                if (k != i && k != j) {
                    kayaks.push_back(weights[k]);
                }
            }
            for (int k=0; k<n*2-2; k+=2) {
                temp += abs(kayaks[k]-kayaks[k+1]);
            }
            ans = min(ans, temp);
        }
    }
    
    cout << ans << endl;
    return 0;
}


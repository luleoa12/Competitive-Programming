// July 15, 2025
// USACO 2019 December Contest, Bronze
// Problem 2. Where Am I?

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("whereami.in", "r", stdin);
    freopen("whereami.out", "w", stdout);

    int n;
    string mailboxes;
    cin>>n;
    cin>>mailboxes;
    for (int sub_len=1; sub_len<=n; sub_len++) {
        bool found = true;
        unordered_map<string, int> frequency;
        for (int i=0;i<=n-sub_len; i++) {
            string sub = mailboxes.substr(i, sub_len);
            frequency[sub]++;
            if (frequency[sub] > 1) {
                found = false;
                break;
            }
        }
        if (found) {
            cout << sub_len << endl;
            break;
        }
    }


    return 0;
}


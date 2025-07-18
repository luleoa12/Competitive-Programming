// July 17, 2025
// USACO 2015 December Contest, Silver
// Problem 3. Breed Counting

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("bcount.in", "r", stdin);
    freopen("bcount.out", "w", stdout);

    int n,q;
    cin>>n>>q;
    vector<int> g(n+1);
    vector<int> h(n+1);
    vector<int> j(n+1);

    for (int c=0;c<n;c++){
        h[c+1]=h[c];
        g[c+1]=g[c];
        j[c+1]=j[c];

        int type;
        cin>>type;
        if (type == 1) h[c + 1]++;
		else if (type == 2) g[c + 1]++;
		else if (type == 3) j[c + 1]++;
    }
    for (int i=0; i<q; i++) {
        int start;
        int end;
        cin>>start>>end;
        cout<<h[end]-h[start-1]<<" "<<g[end]-g[start-1]<<" "<<j[end]-j[start-1]<<endl;
    }
    return 0;
}


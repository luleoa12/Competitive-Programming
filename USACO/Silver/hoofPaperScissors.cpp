// July 17, 2025
// USACO 2017 January Contest, Silver
// Problem 2. Hoof, Paper, Scissors

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("hps.in", "r", stdin);
    freopen("hps.out", "w", stdout);

    int n;
    cin>>n;

    // what they choose
    vector<int> hoof(n+1);
    vector<int> scissors(n+1);
    vector<int> paper(n+1);
    for(int i=0;i<n;i++){
        char x;
        cin>>x;
        scissors[i+1] = scissors[i];
        paper[i+1] = paper[i];
        hoof[i+1] = hoof[i];

        if (x=='P') {
            scissors[i+1] = scissors[i]+1;
        } else if (x=='H') {
            paper[i+1] = paper[i]+1;
        } else{
            hoof[i+1] = hoof[i]+1;
        }
    }
    int ans=0;
    for (int i=1;i<=n;i++){
        int before = max(hoof[i], max(paper[i],scissors[i]));
        int after = max({hoof[n]-hoof[i],paper[n]-paper[i],scissors[n]-scissors[i]});
        ans=max(ans,after+before);
    }
    cout<<ans<<endl;
    return 0;
}


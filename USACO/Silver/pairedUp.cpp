// July 22, 2025
// USACO 2017 US Open Contest, Silver
// Problem 1. Paired Up

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("pairup.in","r",stdin);
    freopen("pairup.out","w",stdout);
    int n;
    cin>>n;
    vector<pair<int,int>> cows;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        pair<int,int>cur = make_pair(y,x);
        cows.push_back(cur);
    }
    sort(cows.begin(),cows.end());
    int ans=0;
    int left=0;
    int right=n-1;

    while (right>=left){
        int sub=min(cows[left].second,cows[right].second);
        
        if(left==right){
            sub/=2;
        }

        ans=max(ans,cows[right].first+cows[left].first);
        cows[left].second-=sub;
        cows[right].second-=sub;
        if(cows[left].second==0){
            left++;
        }
        if(cows[right].second==0){
            right--;
        }

    }
    cout<<ans<<endl;

    return 0;
}


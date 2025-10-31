// 9/27/2025
// https://usaco.org/index.php?page=viewproblem2&cpid=1183

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin>>n;
    vector<ll> heights(n);
    for(ll i=0;i<n;i++){
        cin>>heights[i];
    }
    stack<int> s;
    ll ans=0;
    for(int i=n-1;i>-1;i--){
        while(!s.empty()&&heights[s.top()]<heights[i]){
            s.pop();
        }
        if(!s.empty()){
            ans+=s.top()-i+1;
        }
        s.push(i);
    }
    reverse(begin(heights),end(heights));
    stack<int> s2;
    for(int i=n-1;i>-1;i--){
        while(!s2.empty()&&heights[s2.top()]<heights[i]){
            s2.pop();
        }
        if(!s2.empty()){
            ans+=s2.top()-i+1;
        }
        s2.push(i);
    }
    cout<<ans<<endl;


    return 0;
}


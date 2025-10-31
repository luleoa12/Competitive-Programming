// 9/20/2025
// https://usaco.org/index.php?page=viewproblem2&cpid=1326

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<int> milk(n);
    for(int i=0;i<n;i++){
        cin>>milk[i];
    }
    
    vector<pair<ll,int>> map;
    for(int i=0;i<n;i++){
        map.push_back({milk[i],i});
    }
    sort(map.begin(),map.end());

    vector<int> pos(n);
    vector<ll> arr(n); // sorted values
    for (int i = 0; i < n; i++) {
        arr[i] = map[i].first;
        pos[map[i].second] = i;
    }

    vector<ll> prefix(n+1);
    for(int i=0;i<n;i++){
        prefix[i+1]=arr[i]+prefix[i];
    }
    ll total=0;
    for(int i=0;i<n;i++){
        total+=(ll)(i+1)*arr[i];
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int a,b;
        cin>>a>>b;
        a--;
        int old=pos[a];
        ll ans=total;

        int newPos=lower_bound(arr.begin(),arr.end(),b)-arr.begin();
        if(b>arr[old]){
            newPos--;
        }
        ans-=(ll)(old+1)*arr[old];
        if(newPos>=old){
            ans-=(prefix[newPos+1]-prefix[old+1]);
        } else{
            ans+=(prefix[old]-prefix[newPos]);
        }
        ans+=(ll)(newPos+1)*b;
        cout<<ans<<endl;
    }
    return 0;
}


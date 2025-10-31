// 10/4/2025
// https://usaco.org/index.php?page=viewproblem2&cpid=859

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("convention2.in","r",stdin);
    freopen("convention2.out","w",stdout);

    int n;
    cin>>n;
    vector<ll> a(n),t(n);
    for(int i=0;i<n;i++){
        cin>>a[i]>>t[i];

    }
    vector<int> idx(n);
    iota(idx.begin(), idx.end(), 0);
    sort(idx.begin(),idx.end(),[&](int i,int j){
        return a[i]<a[j];
    });

    priority_queue<int, vector<int>, greater<int>> pq; // waiting line

    ll time=0;
    ll max_wait=0;
    int i=0;
    while(i<n||!pq.empty()){
        if(pq.empty() && time<a[idx[i]]){
            time=a[idx[i]];
        }
        while (i < n && a[idx[i]] <= time) {
            pq.push(idx[i]);
            i++;
        }
        if (!pq.empty()) {
            int cow = pq.top();
            pq.pop();

            ll wait = time - a[cow];
            max_wait = max(max_wait, wait);

            time += t[cow];
        }
    }
    cout<<max_wait<<endl;

    return 0;
}


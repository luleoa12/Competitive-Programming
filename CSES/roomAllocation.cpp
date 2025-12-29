// 12/28/2025
// CSES Problem Set: Sorting and Searching - Room Allocation

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    vector<int> ans(n);
    vector<pair<pair<int,int>,int>> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i].first.first>>v[i].first.second;
        v[i].second=i;
    }

    sort(v.begin(),v.end());
    int last_room=0;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    for(int i=0;i<n;i++){
        if(pq.empty()||pq.top().first>=v[i].first.first){
            last_room++;
            pq.push(make_pair(v[i].first.second, last_room));
			ans[v[i].second]=last_room;
        }else{
            pair<int,int> m=pq.top();
            pq.pop();
            pq.push(make_pair(v[i].first.second,m.second));
            ans[v[i].second]=m.second;
        }
    }
    cout<<last_room<<endl;
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}


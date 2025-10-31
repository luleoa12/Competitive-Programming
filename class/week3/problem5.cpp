// 10/4/2025
// https://usaco.org/index.php?page=viewproblem2&cpid=690

#include <bits/stdc++.h>
using ll = long long;

using namespace std;

/*
the larger value of K, the smaller value of T -> use binary search on K

if everything minus something, then the new one added you add it
*/
int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("cowdance.in","r",stdin);
    freopen("cowdance.out","w",stdout);

    int n,t;
    cin>>n>>t;
    vector<int> duration;
    for(int i=0;i<n;i++){
        int cur;
        cin>>cur;
        duration.push_back(cur);
    }

    int lo=1;
    int hi=n;

    
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i=0;i<mid;i++){
            pq.push(duration[i]);
        }
        int idx=0;
        while(idx+mid!=duration.size()){
            int finish=pq.top();
            
            pq.pop();
            pq.push(duration[mid+idx]+finish);
            idx++;
        }
        int largest=-1;
        while(!pq.empty()){
            largest=max(largest,pq.top());
            pq.pop();
        }
        if(largest>t){
            lo=mid+1;
        }else{
            hi=mid-1;
        }
    }
    cout<<lo<<endl;
    return 0;
}


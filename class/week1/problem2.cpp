// 9/18/2025
// https://usaco.org/index.php?page=viewproblem2&cpid=858

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("convention.in","r",stdin);
    freopen("convention.out","w",stdout);

    int n,m,c;
    cin>>n>>m>>c;

    vector<int> times;
    for(int i=0;i<n;i++){
        int cur;
        cin>>cur;
        times.push_back(cur);
    }
    sort(times.begin(),times.end());
    int min_time=times[0];
    int max_time=times[times.size()-1];

    int left=0;
    int right=max_time-min_time;
    int ans=99999999;
    while(left<=right){
        int mid=left+(right-left)/2;

        int idx=0; 
        int cur_bus=1;
        int starting_time=times[0];
        for(int i=1;i<times.size();i++){
            if(times[i]-starting_time>mid||i+1-idx>c){
                cur_bus++;
                idx=i;
                starting_time=times[i];
            }
        }
        
        if(cur_bus<=m){
            ans=mid;
            right=mid-1;
        }else{
            left=mid+1;
        }

    }
    cout<<ans<<endl;
    return 0;
}


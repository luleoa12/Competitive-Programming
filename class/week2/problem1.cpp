// 9/27/2025
// http://poj.org/problem?id=2823

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    cin>>n>>k;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    deque<int> q;
    vector<int> ans;
    for(int i=0;i<n;i++){
        if(!q.empty() && q.front()<=i-k){
            q.pop_front();
        }
        while(!q.empty() && nums[q.back()]<=nums[i]){
            q.pop_back();
        }
        q.push_back(i);
        if(i>=k-1){
            ans.push_back(nums[q.front()]);
        }
    }
    

    deque<int> q2;
    vector<int> ans2;
    for(int i=0;i<n;i++){
        if(!q2.empty()&&q2.front()<=i-k){
            q2.pop_front();
        }
        while(!q2.empty()&&nums[i]<=nums[q2.back()]){
            q2.pop_back();
        }
        q2.push_back(i);
        if(i>=k-1){
            ans2.push_back(nums[q2.front()]);
        }
    }

    for(int i=0;i<ans2.size();i++){
        if(i>0){
            cout<<" ";
        }
        cout<<ans2[i];
    }
    cout<<endl;
    for(int i=0;i<ans.size();i++){
        if(i>0){
            cout<<" ";
        }
        cout<<ans[i];
    }
    cout<<endl;

    return 0;
}


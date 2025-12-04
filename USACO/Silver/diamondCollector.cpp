// 11/27/2025
// USACO 2016 US Open Contest, Silver
// Problem 2. Diamond Collector

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("diamond.in","r",stdin);
    freopen("diamond.out","w",stdout);

    int n,k;
    cin>>n>>k;

    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    sort(nums.begin(),nums.end());


    vector<int> cases;
    for(int left=0;left<nums.size()-1;left++){
        int right=left+1;
        while(right!=nums.size() && abs(nums[right]-nums[left])<=k){
            right++;
        }
        cases.push_back(right-left);
    }
    cases.push_back(1);
    vector<int> precomp(n);
    int cur=-1;
    for(int i=n-1;i>-1;i--){
        cur=max(cur,cases[i]);
        precomp[i]=cur;
    }
    int ans=-1;
    for(int i=0;i<cases.size();i++){
        if(i+cases[i]<precomp.size()){
            ans=max(ans,cases[i]+precomp[i+cases[i]]);
        }
    }
    cout<<ans<<endl;
    return 0;
}


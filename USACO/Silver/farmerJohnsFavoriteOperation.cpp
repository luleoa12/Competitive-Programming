// 11/22/2025
// USACO 2025 January Contest, Silver
// Problem 2. Farmer John's Favorite Operation

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,m;
        cin>>n>>m;
        vector<int> nums;
        for(int j=0;j<n;j++){
            int cur;
            cin>>cur;
            nums.push_back(cur%m);
            nums.push_back(cur%m+m);
        }
        sort(nums.begin(),nums.end());
        vector<long long> prefix(2*n+1);
        for(int i=0;i<nums.size();i++){
            prefix[i+1]=prefix[i]+nums[i];
        }
        long long ans=LLONG_MAX;
        for(int i=0;i<n;i++){
            int mid=i+n/2;
            ans=min(ans,prefix[i+n]-prefix[i+(n+1)/2]-prefix[mid]+prefix[i]);
        }
        cout<<ans<<endl;

    }
    return 0;
}

// 12/7/2025
// Range Xor Queries

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,q;
    cin>>n>>q;
    vector<int> prefix(n+2);
    vector<int> nums(n+1);
    for(int i=1;i<=n;i++){
        cin>>nums[i];
    }
    prefix[1]=nums[1];
    for(int i=2;i<=n;i++){
        prefix[i]=nums[i]^prefix[i-1];
    }
    for(int i=0;i<q;i++){
        int a,b;
        cin>>a>>b;
        cout<<(prefix[b]^prefix[a-1])<<endl;
    }
    return 0;
}


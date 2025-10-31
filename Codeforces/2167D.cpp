#include <bits/stdc++.h>
using namespace std;

using ll=long long;
int gcd(ll a,ll b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<ll> nums;
        for(int j=0;j<n;j++){
            ll cur;
            cin>>cur;
            nums.push_back(cur);
        }
        int ans=-1;
        for(long long x=2;x<=pow(10,18);x++){
            for(int j=0;j<n;j++){
                if(gcd(x,nums[j])==1){
                    ans=x;
                    break;
                }
            }
            if(ans!=-1){
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
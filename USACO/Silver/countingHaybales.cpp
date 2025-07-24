// July 23, 2025
// USACO 2016 December Contest, Silver
// Problem 1. Counting Haybales

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("haybales.in","r",stdin);
    freopen("haybales.out","w",stdout);

    int n,q;
    cin>>n>>q;
    vector<int> bales(n);

    for(int &i : bales){
        cin>>i;
    }
    sort(begin(bales),end(bales));
    auto atMost = [&](int x){
        int lo=0;
        int hi=bales.size();
        while(hi>lo){
            int mid=(hi+lo)/2;
            if(bales[mid]<=x){
                lo=mid+1;
            }else{
                hi=mid;
            }
        }
        return lo;
    };
    for(int i=0;i<q;i++){
        int start;
        int end;
        cin>>start>>end;
        cout<<atMost(end)-atMost(start-1)<<endl;
    }

    return 0;
}


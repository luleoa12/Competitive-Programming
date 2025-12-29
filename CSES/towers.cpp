// 12/28/2025
// Towers

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<int> towers;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        if(i==0){
            towers.push_back(k);
        }else{
            auto cur=upper_bound(towers.begin(),towers.end(),k);
            if(cur!=towers.end()){
                int idx=distance(towers.begin(),cur);
                towers[idx]=k;
            }else{
                towers.push_back(k);
            }
        }
    }
    cout<<towers.size()<<endl;

    return 0;
}


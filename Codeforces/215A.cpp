// December 30, 2025
// Bicycle Chain

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m;
    cin>>m;
    vector<int> b(m);
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    unordered_map<int,int> check;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(b[i]%a[j]==0){
                int cur=b[i]/a[j];
                check[cur]++;
            }
        }
    }
    int x=-1;
    for(auto &p:check){
        x=max(x,p.first);
    }
    cout<<check[x]<<endl;
    return 0;
}


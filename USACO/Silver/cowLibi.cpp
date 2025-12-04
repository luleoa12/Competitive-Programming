// 11/27/2025
// USACO 2023 February Contest, Silver
// Problem 2. Cow-libi

#include <bits/stdc++.h>
using ll = long long;

using namespace std;

bool comp(vector<int> a, vector<int> b){
    return a[2]<b[2];
}

bool reachable(vector<int> graze, vector<int> alibi){
    long long dx=graze[0]-alibi[0];
    long long dy=graze[1]-alibi[1];
    long long dt=graze[2]-alibi[2];
    return dx*dx+dy*dy<=dt*dt;
}

int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int g,n;
    cin>>g>>n;
    vector<vector<int>> grazings(g);
    for(int i=0;i<g;i++){
        vector<int> cur(3);
        for(int j=0;j<3;j++){
            cin>>cur[j];
        }
        grazings[i]=cur;
    }
    sort(grazings.begin(),grazings.end(),comp);
    vector<vector<int>> alibis(n);
    for(int i=0;i<n;i++){
        vector<int> cur(3);
        for(int j=0;j<3;j++){
            cin>>cur[j];
        }
        alibis[i]=cur;
    }
    int ans=0;
    for(auto alibi:alibis){
        auto ub=upper_bound(grazings.begin(),grazings.end(),alibi, [](vector<int> a,vector<int> b){
            return a[2]<b[2];
        });
        int pos=ub-grazings.begin();
        bool check=false;
        for(int x=pos-1;x<=pos;x++){
            if(x>=0&&x<g){
                if(!reachable(grazings[x],alibi)){
                    check=true;
                    break;
                }
            }
        }
        ans+=check;
        
    }
    cout<<ans<<endl;
    

    return 0;
}


// January 2, 2026
// USACO 2017 February Contest, Silver
// Problem 3. Why Did the Cow Cross the Road III

#include <bits/stdc++.h>
using ll = long long;

using namespace std;
using Road=tuple<int,int,int,int>;
int n,k,r;
set<Road> roads;
vector<vector<bool>> cows;
vector<vector<bool>> visited;
vector<int> dx={-1,0,1,0};
vector<int> dy={0,-1,0,1};

int connected_cow(int r,int c,int prev_r,int prev_c){
    if(r<0||c<0||r>=n||c>=n||visited[r][c]||roads.count({r,c,prev_r,prev_c})){
        return 0;
    }
    visited[r][c]=true;
    int cow_num=cows[r][c];
    for(int i=0;i<4;i++){
        cow_num+=connected_cow(r+dx[i],c+dy[i],r,c);
    }
    return cow_num;
}

int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("countcross.in","r",stdin);
    freopen("countcross.out","w",stdout);

    cin>>n>>k>>r;
    cows.resize(n,vector<bool>(n));
    visited.resize(n,vector<bool>(n));
    for(int i=0;i<r;i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        a--,b--,c--,d--;
        roads.insert(make_tuple(a,b,c,d));
        roads.insert(make_tuple(c,d,a,b));
    }

    for(int i=0;i<k;i++){
        int r,c;
        cin>>r>>c;
        r--,c--;
        cows[r][c]=true;
    }
    vector<int> cow_components;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(!visited[i][j]){
                int c=connected_cow(i,j,i,j);
                if(c!=0){
                    cow_components.push_back(c);
                }
            }
        }
    }
    int ans=0;
    for(int i=0;i<cow_components.size();i++){
        for(int j=i+1;j<cow_components.size();j++){
            ans+=cow_components[i]*cow_components[j];
        }
    }
    cout<<ans<<endl;


    return 0;
}


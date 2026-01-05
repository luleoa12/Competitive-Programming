// January 4, 2026
// USACO 2016 February Contest, Silver
// Problem 3. Milk Pails

#include <bits/stdc++.h>
using ll = long long;

using namespace std;

struct State{
    int op,a,b;
};

int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("pails.in","r",stdin);
    freopen("pails.out","w",stdout);

    int x,y,k,m;
    cin>>x>>y>>k>>m;
    int ans=m;
    vector<vector<int>> visited(x+1,vector<int>(y+1));
    visited[0][0]=1;

    queue<State> q;
    q.push({0,0,0});
    while(!q.empty()){
        int op=q.front().op;
        int a=q.front().a;
        int b=q.front().b;

        q.pop();

        ans=min(ans,abs(m-(a+b)));

        if(op==k)continue;

        if(visited[x][b]==0){
            visited[x][b]=1;
            q.push({op+1,x,b});
        }
        if(visited[a][y]==0){
            visited[a][y]=1;
            q.push({op+1,a,y});
        }

        if(visited[0][b]==0){
            visited[0][b]=1;
            q.push({op+1,0,b});
        }
        if(visited[a][0]==0){
            visited[a][0]=1;
            q.push({op+1,a,0});
        }

        int pour=a+b-y;
        if(pour<=0){
            if(visited[0][a+b]==0){
                visited[0][a+b]=1;
                q.push({op+1,0,a+b});
            }
        }else if(visited[pour][y]==0){
            visited[pour][y]=1;
            q.push({op+1,pour,y});
        }
        pour=a+b-x;
        if(pour<=0){
            if(visited[a+b][0]==0){
                visited[a+b][0]=1;
                q.push({op+1,a+b,0});
            }
        }else if(visited[x][pour]==0){
            visited[x][pour]=1;
            q.push({op+1,x,pour});
        }

    }
    cout<<ans<<endl;
    return 0;
}


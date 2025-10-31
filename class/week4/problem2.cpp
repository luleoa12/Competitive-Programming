// 10/25/2025
// http://dmoj.ca/problem/ccc24j5

#include <bits/stdc++.h>
using namespace std;

void dfs(vector<string> &patch, int &total, pair<int,int> pos){
    
    if(patch[pos.first][pos.second]=='M'){
        total+=5;
    }else if(patch[pos.first][pos.second]=='L'){
        total+=10;
    }else if(patch[pos.first][pos.second]=='S'){
        total+=1;
    }
    patch[pos.first][pos.second]='*';
    int dx[4] = {-1,1,0,0};
    int dy[4] = {0,0,1,-1};
    for(int i=0;i<4;i++){
        if(patch[pos.first+dx[i]][pos.second+dy[i]]!='*'){
            dfs(patch, total, {pos.first+dx[i],pos.second+dy[i]});          
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int row;
    int col;
    cin>>row;
    cin>>col;
    vector<string> patch;
    string hay="";
    for(int i=0;i<col+2;i++){
        hay+='*';
    }
    patch.push_back(hay);
    for(int i=0;i<row;i++){
        string cur;
        cin>>cur;
        cur='*'+cur+'*';
        patch.push_back(cur);
    }
    patch.push_back(hay);
   
    int a,b;
    cin>>a;
    cin>>b;
    pair<int,int> pos=make_pair(a+1,b+1);
    int ans=0;
    // for(int i=0;i<patch.size();i++){
    //     string print="";
    //     for(int j=0;j<patch[i].size();j++){
    //         print+=patch[i][j];
    //     }
    //     cout<<print<<endl;
    // }
    dfs(patch, ans, pos);
    cout<<ans<<endl;
    return 0;
}



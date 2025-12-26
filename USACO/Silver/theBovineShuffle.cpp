// 12/25/2025
// USACO 2017 December Contest, Silver
// Problem 3. The Bovine Shuffle

#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> cows(100000);
vector<int> visited(100000,0);

int main(){
    freopen("shuffle.in","r",stdin);
    freopen("shuffle.out","w",stdout);

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>cows[i];
        cows[i]--;
    }

    int ans=0;
    for(int i=0;i<n;i++){
        if(visited[i]!=0)continue;

        int p=i;
        while(visited[p]==0){
            visited[p]=1;
            p=cows[p];
        }

        if(visited[p]==1){
            int temp=p;
            do{
                ans++;
                visited[temp]=2;
                temp=cows[temp];
            }while(temp!=p);
        }
        int cleanup=i;
        while(visited[cleanup]==1){
            visited[cleanup]=2;
            cleanup=cows[cleanup];
        }
    }
    cout<<ans<<endl;

    return 0;
}
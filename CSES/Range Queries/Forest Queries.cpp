// July 22, 2025
// CSES Problem Set: Range Queries - Forest Queries

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,q;
    cin>>n>>q;
    int forest[1001][1001];
    int prefix[1001][1001];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            char a;
            cin>>a;
            if(a=='*'){
                forest[i+1][j+1]+=1;
            }

        }
    }
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            prefix[i][j]=prefix[i-1][j]+prefix[i][j-1]-prefix[i-1][j-1]+forest[i][j];
        }
    }
    for(int i=0;i<q;i++){
        int start_row, end_row, start_col, end_col;
        cin>>start_row>>start_col>>end_row>>end_col;
        cout<<prefix[end_row][end_col]-prefix[start_row-1][end_col]-prefix[end_row][start_col-1]+prefix[start_row-1][start_col-1]<<endl;
    }
    return 0;
}


// December 31, 2025
// Presents

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    unordered_map<int,int> order;
    for(int i=0;i<n;i++){
        int cur;
        cin>>cur;
        order[cur-1]=i;
    }
    for(int i=0;i<n;i++){
        cout<<order[i]+1<<" ";
    }
    return 0;
}


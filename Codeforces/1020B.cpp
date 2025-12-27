// 12/26/2025
// Codeforces problem 1020B - Badge

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        v[i]--;
    }

    for(int i=0;i<n;i++){
        int slow=i;
        int fast=i;
        while(true){
            slow=v[slow];
            fast=v[v[fast]];
            if(slow==fast)break;
        }
        fast=i;
        while(slow!=fast){
            slow=v[slow];
            fast=v[fast];
        }
        cout<<slow+1<<" ";
    }
    return 0;
}


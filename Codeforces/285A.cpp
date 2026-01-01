// December 31, 2025
// Slightly Decreasing Permutations

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    cin>>n>>k;

    int start=1;
    int end=n+1;
    while(start!=n-k){
        cout<<start<<" ";
        start++;
    }
    while(end!=start){
        cout<<end-1<<" ";
        end--;
    }
    return 0;
}


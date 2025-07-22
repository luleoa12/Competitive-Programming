// July 21, 2025
// Codeforces problem 1826D - Running Miles

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int> beauty(n);
        for(int j=0;j<n;j++){
            cin>>beauty[j];
        }
        vector<int> prefix(n);
        vector<int> suffix(n);

        for(int j=0;j<n;j++){
            prefix[j]=beauty[j]+j;
            suffix[j]=beauty[j]-j;
        }
        for(int j=1;j<n;j++){
            prefix[j]=max(prefix[j],prefix[j-1]);
        }
        for(int j=n-2;j>=0;j--){
            suffix[j]=max(suffix[j],suffix[j+1]);
        }
        int ans=0;
        for(int j=1;j<n-1;j++){
            ans=max(ans,prefix[j-1]+beauty[j]+suffix[j+1]);
        }
        cout<<ans<<endl;

    }

    return 0;
}


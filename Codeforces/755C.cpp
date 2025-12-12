// 12/11/2025
// PolandBall and Forest

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<bool> visited(n);
    int ans=0;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        num--;
        if(i==num)ans+=2;
        else if(!visited[num]){
            ans++;
            visited[num]=1;
        }
    }
    cout<<ans/2<<endl;
    return 0;
}


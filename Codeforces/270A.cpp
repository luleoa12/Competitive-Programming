// December 31, 2025
// Fancy Fence

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    multiset<int> check;
    for(int i=0;i<1000;i++){
        if((180*i)%(i+2)==0){
            check.insert(180*i/(i+2));
        }
    }

    for(int i=0;i<t;i++){
        int cur;
        cin>>cur;
        if(check.find(cur)!=check.end()){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}


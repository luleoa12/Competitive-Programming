#include <bits/stdc++.h>
using namespace std;

using ll=long long;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<ll> toys;
        int count=0;
        for(int j=0;j<n;j++){
            ll cur;
            cin>>cur;
            toys.push_back(cur);
            if(cur%2==0){
                count++;
            }
        }

        if(count==toys.size()||count==0){
            for(int j=0;j<n;j++){
                cout<<toys[j]<<' ';
            }
            cout<<endl;
        }else{
            sort(toys.begin(),toys.end());
            for(int j=0;j<n;j++){
                cout<<toys[j]<<' ';
            }
            cout<<endl;
        }
    }
    return 0;
}
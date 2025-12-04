// 11/23/2025
// USACO 2025 US Open Contest, Silver
// Problem 1. Sequence Construction

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        vector<int> ans;
        int m,k;
        cin>>m>>k;

        bitset<6> bin(k);
        string cur=bin.to_string();
        long long count=0;
  
        for(int i=0;i<5;i++){
            if(k&(1<<i)){
                long long val=(1LL<<(1<<i))-1;
                ans.push_back(val);
                count+=val;
            }
        }
        bool check=true;
        if(count>m){
            cout<<"-1"<<endl;
        }else{
            int r=m-count;
            if(r>=2){
                if(r%2==1){
                    ans.push_back(2); // 10
                    ans.push_back(1); // 01
                    ans.push_back((r-3)/2);
                    ans.push_back((r-3)/2);
                }else{
                    ans.push_back(r/2);
                    ans.push_back(r/2);
                }
                
            }else if(r==1){
                if(ans[0]==1){
                    ans[0]=2;
                }else{
                    check=false;
                }
                

            }
            if(!check){
                cout<<"-1"<<endl;
            }else{
                string x="";
                for(int num:ans){
                    x+=to_string(num);
                    x+=" ";
                }   
                cout<<ans.size()<<endl;
                cout<<x<<endl;
            }
            
        }
        
    }   
    return 0;
}


// December 29, 2025
// Jeff and Digits

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    int fives=0;
    int zeros=0;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        if(num==5){
            fives++;
        }else{
            zeros++;
        }
    }
    string ans;
    if(fives<9&&zeros>0){
        ans="0";
    }else if(zeros==0){
        ans="-1";
    }else{
        string cur="";
        while(fives%9!=0){
            fives--;
        }
        while(fives!=0){
            cur+='5';
            fives--;
        }
        while(zeros!=0){
            cur+='0';
            zeros--;
        }
        ans=cur;
    }
    cout<<ans<<endl;
    return 0;
}


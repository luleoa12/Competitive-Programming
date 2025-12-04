// 11/27/2025
// USACO 2019 February Contest, Silver
// Problem 1. Sleepy Cow Herding

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("herding.in","r",stdin);
    freopen("herding.out","w",stdout);

    int n;
    cin>>n;
    vector<int> cows(n);
    for(int i=0;i<n;i++){
        cin>>cows[i];
    }
    sort(cows.begin(),cows.end());

    // exceptions
    int ansMin=INT_MAX;
    if(cows[n-2]-cows[0]==n-2&&cows[n-1]-cows[n-2]>2){
        ansMin=2;
    }else if(cows[n-1]-cows[1]==n-2&&cows[1]-cows[0]>2){
        ansMin=2;
    }
    // logic
    if(ansMin!=2){
        int cur=0;
        for(int i=0;i<n;i++){
            while(cur+1<n&&cows[cur+1]-cows[i]<n){
                cur++;
            }
            ansMin=min(ansMin,n-(cur-i+1));
        }
    }
    

    int ansMax=max(cows[n-2]-cows[0]+1-(n-1),cows[n-1]-cows[1]+1-(n-1));
    cout<<ansMin<<endl;
    cout<<ansMax<<endl;
    return 0;
}


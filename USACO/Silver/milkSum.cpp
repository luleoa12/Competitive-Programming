// 12/1/2025
// USACO 2023 US Open Contest, Silver
// Problem 1. Milk Sum

#include <bits/stdc++.h>
using namespace std;



int n;
int main(){
    long long sum=0;
    cin>>n;
    vector<long long> a(n);
    vector<int> pos(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> ord(n);
    iota(ord.begin(),ord.end(),0);
    sort(ord.begin(),ord.end(),[&](int i, int j){
        return a[i]<a[j];
    });

    for(int i=0;i<n;i++){
        pos[ord[i]]=i;
        cout<<ord[i];
    }
    sort(a.begin(),a.end());
    vector<long long> prefix(n+1,0);
    for(int i=0;i<n;i++){
        sum+=a[i]*(i+1);
        prefix[i+1]=prefix[i]+a[i];
    }

    int q;
    cin>>q;
    for(int x=0;x<q;x++){
        int i;
        long long j;
        cin>>i>>j;
        i--;
        int index=pos[i];
        int newIndex=lower_bound(a.begin(),a.end(),j)-a.begin();
        if(j>a[index]) newIndex--;
        long long ans=sum;

        ans-=(index+1)*a[index];
        if(newIndex>=index){
            ans-=prefix[newIndex+1]-prefix[index+1];
        }else{
            ans+=prefix[index]-prefix[newIndex];
        }
        ans+=(newIndex+1)*j;
        cout<<ans<<endl;


    }
    return 0;
}
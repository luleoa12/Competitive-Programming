// 11/30/2025
// USACO 2025 February Contest, Silver
// Problem 3. Transforming Pairs

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a>c||b>d){
            cout<<-1<<endl;
        }else{
            ll ans=0;
            while(c>a&&d>b){
                if(c<d){
                    ans+=(d/c);
                    d%=c;
                }else{
                    ans+=(c/d);
                    c%=d;
                }
            }
            if(a==c&&b==d){
                cout<<ans<<endl;
            }else if(a==c&&(d-b)%a==0){
                ans+=(d-b)/a;
                cout<<ans<<endl;
            }else if(b==d&&(c-a)%d==0){
                ans+=(c-a)/d;
                cout<<ans<<endl;
            }else{
                cout<<-1<<endl;
            }
        }
    }
    return 0;
}
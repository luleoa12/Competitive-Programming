// July 22, 2025
// CSES Problem Set: Sorting and Searching - Sum of Three Values

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,x;
    cin>>n>>x;
    vector<pair<int,int>> arr;
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        pair<int,int>p;
        p.first=a;
        p.second=i;
        arr.push_back(p);
    }
    sort(begin(arr),end(arr));
    for(int i=0;i<n;i++){
        int l,r;
        l=0;
        r=n-1;
        while(l!=r){
            if(l==i){
                l++;
                continue;
            }
            if(r==i){
                r--;
                continue;
            }
            int target;
            target=x-arr.at(i).first;
            if(l!=r&&r!=i&&arr.at(l).first+arr.at(r).first==target){
                cout<<arr.at(i).second<<" "<<arr.at(l).second<<" "<<arr.at(r).second<<endl;
                return 0;
            }
            if (arr.at(l).first + arr.at(r).first < target) {
				l++;
			} else {
				r--;
			}
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
}


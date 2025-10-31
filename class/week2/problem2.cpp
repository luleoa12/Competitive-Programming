// 9/27/2025
// https://www.luogu.com.cn/problem/P2947?lang=en

#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<int> heights;
    for(int i=0;i<n;i++){
        int cur;
        cin>>cur;
        heights.push_back(cur);
    }

    stack<int> s;
    vector<int> ans(n);
    for(int i=n-1;i>-1;i--){
        while(!s.empty()&&heights[i]>=heights[s.top()]){
            s.pop();
        }
        ans[i]=s.empty() ? 0 : s.top()+1;
        s.push(i);
    }
    for(int a:ans){
        cout<<a<<endl;
    }
    return 0;
}


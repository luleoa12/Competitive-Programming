// 12/17/2025
// USACO 2022 US Open Contest, Silver
// Problem 2. Subset Equality

#include <bits/stdc++.h>
using ll = long long;
using namespace std;


int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    unordered_map<string,int> precalc;
    
    string s;
    cin>>s;
    string t;
    cin>>t;
    vector<char> letters={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r'};
    for(int x=0;x<letters.size();x++){
        for(int y=x;y<letters.size();y++){
            char l1=letters[x];
            char l2=letters[y];
            string check1="";
            string check2="";
            for(int i=0;i<s.size();i++){
                if(s[i]==l1||s[i]==l2){
                    check1+=s[i];
                }
            }
            for(int i=0;i<t.size();i++){
                if(t[i]==l1||t[i]==l2){
                    check2+=t[i];
                }
            }
            if(check1==check2){
                string cur="";
                cur+=l1;
                cur+=l2;
                precalc[cur]=1;
            }else{
                string cur="";
                cur+=l1;
                cur+=l2;
                precalc[cur]=0;
            }

        }
    }
    int q;
    cin>>q;
    string ans="";
    for(int i=0;i<q;i++){
        string query;
        cin>>query;
        bool c=true;
        for(int j=0;j<query.size();j++){
            for(int k=j;k<query.size();k++){
                string curr="";
                curr+=query[j];
                curr+=query[k];
                if(precalc[curr]==0){
                    c=false;
                }
            }
        }
        
        if(c){
            ans+="Y";
        }else{
            ans+="N";
        }
    }
    cout<<ans<<endl;
    return 0;
}


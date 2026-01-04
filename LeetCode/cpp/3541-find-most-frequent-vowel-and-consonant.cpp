class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int> v;
        unordered_map<char,int> c;
        for(char x:s){
            if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'){
                v[x]++;
            }else{
                c[x]++;
            }
        }
        int ans=0;
        int cur=0;
        for(auto &p:v){
            cur=max(cur,p.second);
        }
        ans+=cur;
        cur=0;
        for(auto &p:c){
            cur=max(cur,p.second);
        }
        ans+=cur;
        return ans;
    }
};
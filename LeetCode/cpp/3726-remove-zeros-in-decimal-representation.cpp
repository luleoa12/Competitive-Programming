class Solution {
public:
    long long removeZeros(long long n) {
        string cur=to_string(n);
        string ans="";
        for(char x:cur){
            if(x!='0'){
                ans+=x;
            }
        }
        return stoll(ans);
    }
};
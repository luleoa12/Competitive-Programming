class Solution {
public:
    string largestGoodInteger(string num) {
        int ans=-1;
        string cur="";
        for(int i=0;i<num.size()-2;i++){
            if(num[i]==num[i+1] && num[i+1]==num[i+2]){
                if(ans<stoi(num.substr(i,3))){
                    ans=max(ans,stoi(num.substr(i,3)));
                    cur=num.substr(i,3);
                }
            }
        }
        return cur;
    }
};
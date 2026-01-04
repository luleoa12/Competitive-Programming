class Solution {
public:
    bool isPalindrome(int x) {
        string cur=to_string(x);
        bool check=true;
        for(int i=0;i<cur.size()/2;i++){
            if(cur[i]!=cur[cur.size()-i-1]){
                check=false;
                break;
            }
        }
        return check;
    }
};
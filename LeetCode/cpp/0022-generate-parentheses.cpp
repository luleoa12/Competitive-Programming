class Solution {
public:
    void func(int left, int right, vector<string> &ans,string cur){
        if(left==0&&right==0){
            ans.push_back(cur);
            return;
        }
        if(left>=1){;
            func(left-1,right,ans,cur+'(');
        }
        if(right>=1&&left<right){
            func(left,right-1,ans,cur+')');
        }
    };
    vector<string> generateParenthesis(int n) {
        vector<string> combinations;
        func(n,n,combinations,"");
        return combinations;
    }
};
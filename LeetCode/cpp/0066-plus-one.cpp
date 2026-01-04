class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        int idx=digits.size()-1;
        while(idx>-1&&digits[idx]==9){
            ans.push_back(0);
            idx--;
        }
        if(idx==-1){
            ans.insert(ans.begin(),1);
        }
        for(int i=idx;i>-1;i--){
            if(i==idx){
                ans.insert(ans.begin(),digits[i]+1);
            }else{
                ans.insert(ans.begin(),digits[i]);
            }
        }
        return ans;
    }
};
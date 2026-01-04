class Solution {
public:
    int minMoves(vector<int>& nums) {
        int max_=-1;
        for(int num:nums){
            max_=max(num,max_);
        }
        int ans=0;
        for(int num:nums){
            ans+=(max_-num);
        }
        return ans;
    }
};
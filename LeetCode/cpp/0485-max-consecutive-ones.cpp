class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int> prefix(nums.size()+1);
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                prefix[i+1]=0;
            }else{
                prefix[i+1]=prefix[i]+nums[i];
            }
        }
        int ans=-1;
        for(int num:prefix){
            ans=max(ans,num);
        }
        return ans;

    }
};
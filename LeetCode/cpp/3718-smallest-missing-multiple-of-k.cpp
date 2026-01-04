class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int ans=0;
        sort(nums.begin(),nums.end());
        int cur=k;
    
        for(int i=0;i<nums.size();i++){
            if(nums[i]%k==0){
                if(nums[i]==cur){
                    cur+=k;
                }else if(i!=0&&nums[i-1]==nums[i]){
                    continue;
                }else{
                    return cur;
                }
            }
        }
        return cur;

        
    }
};
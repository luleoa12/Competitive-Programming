class Solution {
public:
    int countPartitions(vector<int>& nums) {
        vector<int> prefix(nums.size()+1);
        for(int i=0;i<nums.size();i++){
            prefix[i+1]=prefix[i]+nums[i];
        }
        int ans=0;
        for(int i=1;i<prefix.size()-1;i++){
            if(((prefix[prefix.size()-1]-prefix[i])-prefix[i])%2==0){
                ans++;
            }
        }
        return ans;
    }
};
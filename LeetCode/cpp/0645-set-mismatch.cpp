class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> freq;
        for(int num:nums){
            freq[num]++;
        }
        int cur=nums.size()*(nums.size()+1)/2;
        for(auto &p:freq){
            if(p.second==2){
                cur+=p.first;
                ans.push_back(p.first);
                break;
            }
        }
        for(int num:nums){
            cur-=num;
        }
        ans.push_back(cur);
        return ans;

    }
};
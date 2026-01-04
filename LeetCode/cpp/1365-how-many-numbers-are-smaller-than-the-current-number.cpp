class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        vector<int> sorted = nums;
        sort(sorted.begin(),sorted.end());
        unordered_map<int,int> check;
        for(int i=0;i<sorted.size();i++){
            int num=sorted[i];
            if(check.count(num)!=1){
                check[num]=i;
            }
        }
        for(int num:nums){
            ans.push_back(check[num]);
        }
        return ans;
    }
};
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        unordered_set<int> cur;
        for(int num:nums){
            cur.insert(num);
        }
        for(int i=1;i<=nums.size();i++){
            if(cur.find(i)==cur.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int ans=9999999;
        for(auto task:tasks){
            ans=min(ans, task[0]+task[1]);
        }
        return ans;
    }
};
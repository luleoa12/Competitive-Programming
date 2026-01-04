class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        unordered_set<int> cur;
        for(int num:nums){
            cout<<num<<endl;
            cur.insert(num);
        }
        vector<int> ans;
        vector<int> cur2;
        for(auto num2:cur){
            cur2.push_back(num2);
        }
        sort(cur2.begin(),cur2.end(),greater<int>());
        int check;
        if(k<cur2.size()){
            check=k;
        }else{
            check=cur2.size();
        }

        for(int i=0;i<check;i++){
            ans.push_back(cur2[i]);
        }
        return ans;
    }
};
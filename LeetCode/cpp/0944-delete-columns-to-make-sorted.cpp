class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int ans=0;
        for(int i=0;i<strs[0].size();i++){
            vector<char> cur;
            vector<char> copy;
            for(int j=0;j<strs.size();j++){
                cur.push_back(strs[j][i]);
                copy.push_back(strs[j][i]);
            }
            sort(cur.begin(),cur.end());
            if(copy!=cur){
                ans++;
            }
        }
        return ans;
    }
};
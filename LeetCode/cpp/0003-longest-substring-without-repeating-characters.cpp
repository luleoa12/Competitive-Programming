class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0;
        int left=0;
        set<char> check;
        for(int i=0;i<s.size();i++){

            while(check.find(s[i])!=check.end()){
                check.erase(s[left]);
                left++;
            }
            check.insert(s[i]);
            ans=max(ans, i-left+1);
        }
        return ans;
    }
};
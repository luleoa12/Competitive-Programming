class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans=0;
        for(string x:operations){
            if(x.contains("--")){
                ans--;
            }else{
                ans++;
            }
        }
        return ans;
    }
};
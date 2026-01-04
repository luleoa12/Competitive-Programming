class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        double sum=0;
        for(int num:nums){
            sum+=num;
        }
        cout<<sum<<endl;
        //double average=sum/nums.size();
        int average=sum/nums.size();
        cout<<average<<endl;
        int ans=max(average+1,1);
        cout<<ans<<endl;
        while(find(nums.begin(),nums.end(),ans)!=nums.end()){
            ans++;
        }
        return ans;
    }
};
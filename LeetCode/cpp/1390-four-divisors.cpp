class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans=0;
        for(int num:nums){
            vector<int> d;
            int cur=sqrt(num);
            int s=0;
            for(int i=1;i<=cur;i++){
                if(num%i==0){
                    if(num/i==i){
                        d.push_back(i);
                        s+=i;
                    }else{
                        d.push_back(i);
                        d.push_back(num/i);
                        s+=i;
                        s+=num/i;
                    }

                }
            }
            if(d.size()==4){
                cout<<num<<endl;
                ans+=s;
            }

        }
        return ans;
    }
};
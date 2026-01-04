class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int prod=1;
        int cur=n;
        while(cur!=0){
            sum+=cur%10;
            prod*=cur%10;
            cur/=10;
        }
        return n%(sum+prod)==0;
    }
};
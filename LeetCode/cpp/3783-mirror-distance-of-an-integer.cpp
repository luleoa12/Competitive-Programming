class Solution {
public:
    int mirrorDistance(int n) {
        int x=0;
        int copy=n;
        int l=0;
        while(copy>0){
            copy/=10;
            l++;
        }
        cout<<l;
        int copy2=n;
        while(n>0){
            int cur=n%10;
            n/=10;
            x+=cur*pow(10,l-1);
            l--;
        }
        return abs(x-copy2);
    }
};
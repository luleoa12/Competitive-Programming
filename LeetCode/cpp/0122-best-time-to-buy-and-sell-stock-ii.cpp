class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cur=prices[0];
        int ans=0;
        for(auto price:prices){
            cur=min(price,cur);
            if(price>cur){
                ans+=price-cur;
                cur=price;
            }
        }
        return ans;
    }
};
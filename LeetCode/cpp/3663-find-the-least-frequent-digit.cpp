class Solution {
public:
    int getLeastFrequentDigit(int n) {
        unordered_map<int,int> freq;
        while(n!=0){
            int cur=n%10;
            freq[cur]++;
            n/=10;
        }
        int minFreq=9999999;
        int ans=9999999;
        for(const auto &p:freq){
            if(p.second<minFreq){
                ans=p.first;
                minFreq=p.second;
            }
            if(p.second==minFreq){
                ans=min(ans,p.first);
            }
        }
        return ans;
    }
};
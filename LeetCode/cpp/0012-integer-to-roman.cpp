class Solution {
public:
    string intToRoman(int num) {

        map<int, string> conversion={
            {4,"IV"},
            {9,"IX"},
            {40,"XL"},
            {90,"XC"},
            {400,"CD"},
            {900,"CM"}
        };
        map<int,string> convert2={
            {1,"I"},
            {5,"V"},
            {10,"X"},
            {50,"L"},
            {100,"C"},
            {500,"D"},
            {1000,"M"}
        };
        vector<int> digits;
        while(num>0){
            int digit=num%10;
            digits.push_back(digit);
            num/=10;
        }
        reverse(digits.begin(),digits.end());
        string ans="";
        for(int i=0;i<digits.size();i++){
            int n=digits[i]*pow(10,digits.size()-i-1);
            if(conversion.count(n)!=0){
                ans+=conversion[n];
            }else{
                for(auto it=convert2.crbegin();it!=convert2.crend();it++){
                    while(n>=it->first){
                        n-=it->first;
                        ans+=it->second;
                    }
                }
            }
        }
        return ans;
    }
};
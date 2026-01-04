class Solution {
public:
    string generateTag(string caption) {
        string ans="#";
        string s;
        stringstream ss(caption);
        int count=0;
        while (getline(ss, s, ' ')) {
            string cur="";
            if(count==0){
                transform(s.begin(),s.end(),s.begin(),::tolower);
                ans+=s;
            }else{
                for(int i=0;i<s.size();i++){
                    if(i==0){
                        cur+=toupper(s[i]);
                    }else{
                        cur+=tolower(s[i]);
                    }
                }
                ans+=cur;
            }
            count++;
            cout<<s<<endl;
            if(s.size()==0){
                count--;
            }

        }
        if(ans.size()>100){
            ans=ans.substr(0,100);
        }
        return ans;
    }
};
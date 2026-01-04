class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int diff=arr[1]-arr[0];
        bool check=true;
        for(int i=1;i<arr.size();i++){
            if(arr[i]-arr[i-1]!=diff){
                check=false;
                break;
            }
        }
        return check;
    }
};
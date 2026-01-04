class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(),capacity.end(),greater<int>());
        int cur=0;
        for(int i=0;i<apple.size();i++){
            cur+=apple[i];
        }
        int s=0;
        int i=0;
        while(s<cur){
            s+=capacity[i];
            i++;
        }
        return i;
    }
};
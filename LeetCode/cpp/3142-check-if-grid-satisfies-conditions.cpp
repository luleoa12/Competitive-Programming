class Solution {
public:
    bool satisfiesConditions(vector<vector<int>>& grid) {

        for(int i=0;i<grid[0].size();i++){
            bool cur=true;
            int check=grid[0][i];
            for(int j=0;j<grid.size();j++){
                if(grid[j][i]!=check){
                    cur=false;
                }
            }
            if(!cur){
                return false;
            }
        }
        cout<<21313<<endl;
        int before=grid[0][0];
        cout<<before;
        if(grid[0].size()!=1){
            for(int i=1;i<grid[0].size();i++){
                cout<<grid[0][i];
                if(grid[0][i]==before){
                    return false;
                }else{
                    before=grid[0][i];
                }
            }
        }
        
        return true;
    }
};
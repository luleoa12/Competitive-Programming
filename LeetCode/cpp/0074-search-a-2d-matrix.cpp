class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int> nums;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                nums.push_back(matrix[i][j]);
            }
        }
        int lo=0;
        int hi=nums.size()-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]==target){
                return true;
            }else if(nums[mid]>target){
                hi=mid-1;
            }else{
                lo=mid+1;
            }
        }
        return false;

    }
};
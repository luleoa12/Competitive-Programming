class Solution {
public:
    void sortColors(vector<int>& nums) {
        // O(n^2)
        // for(int j=0;j<nums.size();j++){
        //     for(int i=0;i<nums.size()-1;i++){
        //         if(nums[i]>nums[i+1]){
        //             int temp=nums[i+1];
        //             nums[i+1]=nums[i];
        //             nums[i]=temp;
        //         }
        //     }
        // }

        int blue_count=0;
        int red_count=0;
        int white_count=0;
        for(int num:nums){
            if(num==0){
                red_count++;
            }else if(num==1){
                white_count++;
            }else{
                blue_count++;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(red_count!=0){
                nums[i]=0;
                red_count--;
            }else if(white_count!=0){
                nums[i]=1;
                white_count--;
            }else{
                nums[i]=2;
                blue_count--;
            }
        }

    }
};
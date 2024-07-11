class Solution {
public:
    void sortColors(vector<int>& nums) {
        int c0=0, c1=0, c2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                c0++;
            }
            else if(nums[i]==1){
                c1++;
            }
            else{
                c2++;
            }
        }
        int i=0;
        if(c0>0){
            for(; i<c0;i++){
                nums[i]=0;
            }
        }
        if(c1>0){
            for(;i<c1+c0;i++){
                nums[i]=1;
            }
        }
        if(c2>0){
            for(;i<c2+c0+c1;i++){
                nums[i]=2;
            }
        }


    }
};
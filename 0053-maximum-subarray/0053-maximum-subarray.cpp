class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int maxsum=nums[0];
        for(int i=0;i<n;i++){
            if(sum<0){
                sum=0;
            }             
            sum=sum+nums[i];
            if(sum>maxsum){
                maxsum=sum;
            }
              
        }
        return maxsum;
    }
};
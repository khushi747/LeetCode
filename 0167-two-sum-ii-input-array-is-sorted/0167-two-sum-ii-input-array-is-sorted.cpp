class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector <int> ans;
        int i=0;
        int j=n-1;
        int sum=0;
        while(i<j){
            sum = nums[i] + nums[j];
            if(sum==target){
                ans.push_back(i+1);
                ans.push_back(j+1);
                break;
            }
            else if(sum<target){
                i++;
            }
            else{
                j--;
            }
        }
        return ans;
    }
};
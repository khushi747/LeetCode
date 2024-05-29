class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1])
                    return true;
            }
        return false;


        //BRUTE-FORCE APPROACH
        // int size=nums.size();
        // for(int start=0; start<size;start++){
        //     for(int end=start+1;end<size;end++){
        //         if(nums[end]==nums[start]){
        //             return true;
        //         }
        //     }
        // }
        // return false;        
        
    }
};
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int size1=nums1.size();  
        int size2=nums2.size();  
        vector <int> v;
        
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i=0;
        int j=0;

        while(i<size1 && j<size2){
            if(nums1[i]==nums2[j]){
                if (i == 0 || nums1[i] != nums1[i - 1]) {
                    v.push_back(nums1[i]);
                }
                i++;
                j++;
            }
            else if(nums1[i]>nums2[j]){
                j++;
            }
            else{
                i++;
            }

        }
        return v;
 
    }
};
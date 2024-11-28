class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if not nums:
            return nums

        j=1
        n=len(nums)
        for i in range(1,n):
            if nums[i]!=nums[i-1]:
                nums[j]=nums[i]
                j=j+1

        return j            
            

        
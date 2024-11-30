class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        n=len(nums)
        j=0
        k=0
        for i in range(0,n):
            if nums[i]!=0:
                k=k+1
        for i in range(0,n):
            if nums[i]!=0:
                nums[j]=nums[i]
                j=j+1
        for i in range(k,n):
            nums[i]=0
            
        
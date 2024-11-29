class Solution(object):
    def rotate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        n=len(nums)
        k=k%n
        def reverse(start,end):
            while start<end:
                temp=nums[start]
                nums[start]=nums[end]
                nums[end]=temp
                start=start+1
                end=end-1

        reverse(0,n-1)
        reverse(0,k-1)
        reverse(k,n-1)
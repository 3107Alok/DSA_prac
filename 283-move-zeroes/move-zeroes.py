class Solution(object):
    def moveZeroes(self, nums):
        n=len(nums)
        a=[x for x in nums if x!=0]
        a+=[0]*(n-len(a))
        nums[:]=a
        
class Solution(object):
    def findMaxAverage(self, nums, k):
        l = len(nums)

        sum = 0
        for i in range(k):
            sum += nums[i]

        maxsum = sum

        for i in range(k, l):
            sum += nums[i]
            sum -= nums[i-k]

            maxsum = max(maxsum, sum)

        return maxsum / float(k)
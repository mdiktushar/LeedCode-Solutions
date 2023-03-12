class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        maxSum = nums[0]
        sum = 0
        for i in nums:
            if sum < 0:
                sum = 0
            sum += i
            maxSum = max(maxSum, sum)
        return maxSum
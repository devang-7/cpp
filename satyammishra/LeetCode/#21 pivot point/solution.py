class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
            sum1 = 0
            sum2  = sum(nums)
            for i in range(len(nums)):
                sum1 += nums[i]
                if sum1 == sum2:
                    return i
                sum2 -= nums[i]
                
            return -1

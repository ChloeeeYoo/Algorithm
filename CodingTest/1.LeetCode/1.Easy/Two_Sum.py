class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        answer = []
        k = len(nums)
        for i in range (len(nums)):
            for j in range (1,k):
                if nums[i] + nums[i+j] == target: 
                    answer.append(i)
                    answer.append(i+j)
                    break
            k = k - 1

        return answer


## https://leetcode.com/problems/two-sum/

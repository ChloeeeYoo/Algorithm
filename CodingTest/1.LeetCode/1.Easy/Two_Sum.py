## Problem
## https://leetcode.com/problems/two-sum/

## Solution #1
## O(n^2); Brute Force
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


## Solution #2
## O(n); Hash Table
## **point** dictionary <- hash table, if search both idx and val
## **point** list enumerate (idx, val)
## **point** target - value

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dic = {}

        for idx, val in enumerate (nums):
            if target - val in dic:
                return [idx, dic[target - val]]
            
            dic[val] = idx        
            ## dictionary는 key값으로 -> value 값 조회 가능. (value로 -> key값 조회 불가)
            ## 우리가 최종적으로 return 해야 하는 값은 index 값이므로 index를 dictionary의 value에 넣음

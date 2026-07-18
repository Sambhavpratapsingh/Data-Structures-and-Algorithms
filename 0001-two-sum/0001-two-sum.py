class Solution:
    def twoSum(self, nums, target):
        hashmap = {}

        for j, num in enumerate(nums):
            complement = target - num

            if complement in hashmap:
                return [hashmap[complement], j]

            hashmap[num] = j
        
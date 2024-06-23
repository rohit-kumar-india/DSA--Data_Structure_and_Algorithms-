''' #Python
Leetcode Link: https://leetcode.com/problems/count-number-of-nice-subarrays/description/?envType=daily-question&envId=2024-06-23.
Problem Statement: Given an array of integers nums and an integer k. A continuous subarray is called nice if there are k odd numbers on it.

Return the number of nice sub-arrays.

 

Example 1:

Input: nums = [1,1,2,1,1], k = 3
Output: 2
Explanation: The only sub-arrays with 3 odd numbers are [1,1,2,1] and [1,2,1,1].
Example 2:

Input: nums = [2,4,6], k = 1
Output: 0
Explanation: There are no odd numbers in the array.
Example 3:

Input: nums = [2,2,2,1,2,2,1,2,2,2], k = 2
Output: 16
'''

class Solution:
    def numberOfSubarrays(self, nums: list[int], k: int) -> int:
        ans = 0
        odds = []
        for i in range(len(nums)):
            if nums[i] % 2 == 1:
                odds.append(i)

        if len(odds) < k:
            return 0

        for j in range(len(odds) - k + 1):
            if j == 0:
                a = odds[j] + 1
            else:
                a = odds[j] - odds[j - 1]
            if j + k == len(odds):
                b = len(nums) - odds[j + k - 1]
            else:
                b = odds[j + k] - odds[j + k - 1]
            ans += a * b

        return ans


if __name__ == '__main__':
        nums = list(map(int,input().strip().split()))
        k=int(input())
        ob=Solution()
        li = ob.numberOfSubarrays(nums,k)
        print(li)
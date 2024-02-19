''' #Python
Leetcode Link: https://leetcode.com/problems/reverse-integer/
Problem statement: Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

Example 1:
Input: x = 123
Output: 321

Example 2:
Input: x = -123
Output: -321

Example 3:
Input: x = 120
Output: 21
 
Constraints: -231 <= x <= 231 - 1'''

x=int(input())

class Solution:
    def reverse(self, x: int) -> int:
        rev = 0
        a = abs(x)
        while a != 0:
            rev = (rev * 10) + (a % 10)
            a = a // 10
        if x > 0 and rev < 2**31:
            return rev
        elif x < 0 and rev <= 2**31:
            return -rev
        else:
            return 0
        
    def reverseUsingStr(self, x: int) -> int:
        s = str(abs(x))
        rev = int(s[::-1])
        if rev > 2**31:
            return 0
        return rev if x>0 else rev*-1

s = Solution()
print(s.reverse(x))
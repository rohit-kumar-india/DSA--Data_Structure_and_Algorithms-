''' #Python
CN Link: https://www.codingninjas.com/codestudio/problems/count-digits_8416387?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
Problem statement: You are given a number ’n’. Find the number of digits of ‘n’ that evenly divide ‘n’.

Note: A digit evenly divides ‘n’ if it leaves no remainder when dividing ‘n’.

Example:
Input: ‘n’ = 336
Output: 3

Explanation:
336 is divisible by both ‘3’ and ‘6’. Since ‘3’ occurs twice it is counted two times.
Note:You don’t need to print anything. Just implement the given function.

Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
35
Sample Output 1:
1

Explanation of sample output 1:
35 is only divisible by ‘5’, hence answer is 1.

Sample Input 2:
373
Sample Output 2:
0

Explanation of sample output 2:
There’s no digit in 373 that evenly divides it. Hence the output is 0.

Expected Time Complexity:
Try to solve this in O(log(n)) 

Constraints:
1 <= ‘n’ <= 10^9

Time Limit: 1 sec
'''

n=int(input())

def countDigits(n: int) -> int:
    num=n
    count=0
    while n>0:
        d=n%10
        n=n//10
        if d!=0 and num%d==0:
            count+=1
    return count

print(countDigits(n))
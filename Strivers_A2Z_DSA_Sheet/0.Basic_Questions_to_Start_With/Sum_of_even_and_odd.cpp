/* #C++
CN Link: https://www.codingninjas.com/studio/problems/sum-of-even-odd_624650?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
Problem statement: Write a program to input an integer 'n' and print the sum of all its even digits and the sum of all its odd digits separately.

Digits mean numbers, not places! That is, if the given integer is "132456", even digits are 2, 4, and 6, and odd digits are 1, 3, and 5.

Constraints
0<= 'n' <=10000

Example :
Input: 'n' = 132456
Output: 12 9

Explanation:
The sum of even digits = 2 + 4 + 6 = 12
The sum of odd digits = 1 + 3 + 5 = 9
Constraints
0<= 'n' <=10000

Example :
Input: 'n' = 132456
Output: 12 9

Explanation:
The sum of even digits = 2 + 4 + 6 = 12
The sum of odd digits = 1 + 3 + 5 = 9
Input format :
 The first line contains an integer 'n'.
Output format :
In a single line, print two space-separated integers, first the sum of even digits and then the sum of odd digits.

Sample Input 1:
132456
Sample Output 1:
12 9

Explanation of sample input 1 :
The sum of even digits = 2 + 4 + 6 = 12
The sum of odd digits = 1 + 3 + 5 = 9

Sample Input 2:
552245
Sample Output 2:
8 15
*/

#include<iostream>
using namespace std;

int main() {
	int n, even=0, odd=0;
	cin >> n;

	while(n>0){
		int a=n%10;
		n=n/10;
		if(a%2==0) even+=a;
		else odd+=a;
	}
	cout << even << " " << odd;
	
}
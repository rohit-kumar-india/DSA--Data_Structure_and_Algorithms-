''' #Python
CodingNinja Link: https://www.codingninjas.com/studio/problems/selection-sort_624469?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
Problem statement: Sort the given unsorted array 'arr' of size 'N' in non-decreasing order using the selection sort algorithm.

Example:
Input:
N = 5
arr = {8, 6, 2, 5, 1}

Output:
1 2 5 6 8 
Explanation: 

Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
6
2 13 4 1 3 6 
Sample Output 1:
1 2 3 4 6 13 
Explanation Of Sample Input 1:
 Select 1 and swap with element at index 0. arr= {1,13,4,2,3,6}

 Select 2 and swap with element at index 1. arr= {1,2,4,13,3,6}

 Select 3 and swap with element at index 2. arr= {1,2,3,13,4,6}

 Select 4 and swap with element at index 3. arr= {1,2,3,4,13,6}

 Select 6 and swap with element at index 4. arr= {1,2,3,4,6,13}
Sample Input 2:
5
9 3 6 2 0
Sample Output 2:
0 2 3 6 9

Constraints :
1 <= N <= 10^3
0 <= arr[i] <= 10^5
Time Limit: 1 sec'''


def selectionSort(arr: list[int]) -> None: 
    for i in range(len(arr)-1):
        s=i
        for j in range(i+1,len(arr)):
            if arr[s] > arr[j]: s=j
        if s!=i: arr[s], arr[i] = arr[i], arr[s]

arr=list(map(int,input().split()))
selectionSort(arr)
for i in arr: print(i,end=" ")
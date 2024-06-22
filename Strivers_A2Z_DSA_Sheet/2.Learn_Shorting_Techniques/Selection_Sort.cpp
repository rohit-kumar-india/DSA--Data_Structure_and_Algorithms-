/* #C++
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
Time Limit: 1 sec
*/

#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int>&arr) {
    int l=arr.size();
    for(int i=0;i<l-1;i++){
        int s=i;
        for(int j=i+1;j<l;j++){
            if(arr[s]>arr[j]) s=j;
        }
        if (s!=i) swap(arr[s],arr[i]);
    }
}

int main(){
    int n,a;
    cin >> n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        cin >> a;
        arr.push_back(a);
    }
    selectionSort(arr);
    for(int i=0;i<n;i++){
        cout << arr[i]<< " ";
    }
    return 0;
}
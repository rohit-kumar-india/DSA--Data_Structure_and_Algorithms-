/* #C++
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
*/


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int ans = 0;
        vector<int> odds;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 1)
                odds.push_back(i);
        }

        if (odds.size() < k)
            return 0;

        for (int j = 0; j < odds.size() - k + 1; j++) {
            int a, b = 0;
            if (j == 0)
                a = odds[j] + 1;
            else
                a = odds[j] - odds[j - 1];
            if (j + k == odds.size())
                b = nums.size() - odds[j + k - 1];
            else
                b = odds[j + k] - odds[j + k - 1];
            ans += a * b;
        }

        return ans;
    }

    // In O(n2)
    // int numberOfSubarraysIn(vector<int>& nums, int k) {
    //     int ans=0;
    //     for(int i=0;i<nums.size();i++){
    //         int count=0;
    //         for(int j=i; j< nums.size();j++){
    //             if(nums[j]%2==1)
    //                 count++;
    //             if(count==k) ans++;
    //             else if(count > k) break;
    //         }
    //     }
    //     return ans;
    // }
};

int main() {
	    int N,a,k;
	    cin >>N;
	    vector<int> nums;
	    
	    for(int i = 0;i<N;i++){
	        cin >> a;
            nums.push_back(a);
	    }

        cin >>k;

	    Solution ob;
	    int ans = ob.numberOfSubarrays(nums,k);
	    cout<<ans;
	return 0;
}
// Check Sorted Array : In this question we have to check whether the array is sorted or not, if yes then return 1 and else return 0.

// Question - Leetcode - 1752 : Easy
/*
Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.

There may be duplicates in the original array.

Note: An array A rotated by x positions results in an array B of the same length such that B[i] == A[(i+x) % A.length] for every valid index i.

 

Example 1:

Input: nums = [3,4,5,1,2]
Output: true
Explanation: [1,2,3,4,5] is the original sorted array.
You can rotate the array by x = 3 positions to begin on the element of value 3: [3,4,5,1,2].
Example 2:

Input: nums = [2,1,3,4]
Output: false
Explanation: There is no sorted array once rotated that can make nums.
Example 3:

Input: nums = [1,2,3]
Output: true
Explanation: [1,2,3] is the original sorted array.
You can rotate the array by x = 0 positions (i.e. no rotation) to make nums.
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        bool check(vector<int>& nums) {
            int n = nums.size();
            int count = 0;
    
            for (int i = 0; i < n; i++) {
                if (nums[i] > nums[(i + 1) % n]) { 
                    count++;
                }
                if (count > 1) return false;
            }
    
            return true;
        }
    };
    

// Question - Coding Ninja : Easy
/*
Problem statement
You have been given an array ‘a’ of ‘n’ non-negative integers.You have to check whether the given array is sorted in the non-decreasing order or not.



Your task is to return 1 if the given array is sorted. Else, return 0.



Example :
Input: ‘n’ = 5, ‘a’ = [1, 2, 3, 4, 5]
Output: 1

The given array is sorted in non-decreasing order; hence the answer will be 1.
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1 :
4
0 0 0 1
Sample Output 1 :
1
Explanation For Sample Input 1 :
The given array is sorted in non-decreasing order; hence the answer will be 1. 
Sample Input 2 :
5
4 5 4 4 4
Sample Output 2 :
0
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int isSorted(int n, vector<int> arr) {
    // Write your code here.
    for(int i=1;i<n;i++)
    {
      if(arr[i]>=arr[i-1])
      {
      }
      else
      {
        return 0;
      }
     
    }
    return 1;
}

//  Another way 
#include <iostream>
using namespace std;
 bool check(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1] && arr[i]<=arr[i+1]){
                return true;
        }
        return false;
    }
 }
 main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin >> arr[i];
    }
    bool ch = check(arr,n);
    cout<< ch;
}
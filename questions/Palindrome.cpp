// Palindrome Number - These are the number in which when we reverse a actual number it will be equal to actual number .
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n ;
    cin >> n;
    int dup = n;
    int rev = 0;
    while(n!=0){
        int digit = n % 10;
        rev = rev*10 + digit;
        n =n/10;
    }
    if( rev == dup) cout << "true";
    else cout << "false";
}

// Question : Palindrome number ( Easy) - Leetcode(09)
// Given an integer x, return true if x is a palindrome, and false otherwise.
// Example 1:

// Input: x = 121
// Output: true
// Explanation: 121 reads as 121 from left to right and from right to left.
// Example 2:

// Input: x = -121
// Output: false
// Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
// Example 3:

// Input: x = 10
// Output: false
// Explanation: Reads 01 from right to left. Therefore it is not a palindrome.

// Solution:

// class Solution {
//     public:
//         bool isPalindrome(int n) {
//             if (n < 0) return false; // Negative number
    
//             long long rev = 0;
//             int dup = n;
    
//             while (n != 0) {
//                 int digit = n % 10;
//                 rev = rev * 10 + digit;
//                 n = n / 10;
//             }
    
//             return rev == dup;
//         }
//     };
    
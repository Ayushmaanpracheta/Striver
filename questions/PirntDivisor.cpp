#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// for printing sum all divisor :
int main() {
    int n;
    cin >> n;
    int sum =0;
    for(int i=1;i<=n;i++){
        int digit = n%i;
        if(digit== 0){
            sum = sum + i;
        }
        cout << sum << endl;
    }
    return 0;
}

// Question : SumOfDivisor(GFG)- Easy
// Given a positive integer n, The task is to find the value of Σi F(i) where i is from 1 to n and function F(i) is defined as the sum of all divisors of i.

// Examples:

// Input: n = 4
// Output: 15
// Explanation:
// F(1) = 1
// F(2) = 1 + 2 = 3
// F(3) = 1 + 3 = 4
// F(4) = 1 + 2 + 4 = 7
// So, F(1) + F(2) + F(3) + F(4)
//     = 1 + 3 + 4 + 7 = 15

//     class Solution {
//         public:
//           int sumOfDivisors(int n) {
//               // Write Your Code here
//               int sum = 0;
//               for(int i =1;i<=n;i++){
//                   sum = sum + (n/i)*i;
//               }
//               return sum;
//           }
//       };
      
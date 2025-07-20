// Armstrong Number - An Armstrong number is a number that is equal to the sum of its digits, each raised to the power of 3.
// Method 1
// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cin >> n;
//     int dup = n;
//     int sum =0;
//     while(n!=0){
//         int digit = n %10;
//         sum = sum + (digit*digit*digit);
//         n = n/10;
//     }
//     if(sum == dup) cout << "true";
//     else cout << "false";
// }


// Question : Armstrong Number ( GFG) - Easy
// You are given a 3-digit number n, Find whether it is an Armstrong number or not.
// An Armstrong number of three digits is a number such that the sum of the cubes of its digits is equal to the number itself. 371 is an Armstrong number since 33 + 73 + 13 = 371. 
// Note: Return true if it is an Armstrong number else return false.

// Examples
// Input: n = 153
// Output: true
// Explanation: 153 is an Armstrong number since 13 + 53 + 33 = 153. 
// Input: n = 372
// Output: false
// Explanation: 372 is not an Armstrong number since 33 + 73 + 23 = 378. 
// Input: n = 100
// Output: false
// Explanation: 100 is not an Armstrong number since 13 + 03 + 03 = 1. 

// Method 2 ( with function):
// (a)
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int armstrong(int n){
    int dup = n;
    int sum =0;
    while(n!=0){
        int digit = n%10;
        sum = sum + (digit*digit*digit);
        n = n/10;
    }
    return sum == dup;
}
int main(){
    int n;
    cin >> n;
    armstrong(n);
    cout << armstrong(n)<< endl;
    return 0;
}

// (b)
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      bool armstrongNumber(int n) {
        
          int sum = 0;
          int dup =  n;
          while(n!=0){
              int digit = n%10;
              sum = sum +(digit*digit*digit);
              n = n/10;
          }
          return sum == dup;
      }
  };

  int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        bool flag = ob.armstrongNumber(n);
        if (flag) {
            cout << "true"<< endl;
        } else {
            cout << "false"<< endl;
        }
        cout << "~" <<"\n";
    }
    return 0;
}
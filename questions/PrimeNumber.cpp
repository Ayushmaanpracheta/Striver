// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int count = 0;
//     for(int i=1;i<=n;i++){
//         if(n%i == 0){
//             count = count +1;
//         }
//         if(count == 2) cout << "True" << endl;
//         else cout << "False" << endl;
//     }
//     return 0;
// }

// Question : PrimeNumber (codingNinja) - Easy
// Problem statement
// A prime number is a positive integer that is divisible by exactly 2 integers, 1 and the number itself.
// You are given a number 'n'.
// Find out whether 'n' is prime or not.

// Example :
// Input: 'n' = 5

// Output: YES

// Explanation: 5 is only divisible by 1 and 5. 2, 3 and 4 do not divide 5.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n==1) return false;
    for(int i =2;i<= n-1;i++){
        if(n%i ==0) return false;
    }
    return true;
}

// bool isPrime(int n)
// {
// 	// Write your code here.
// 	if(n==1) return 0;
// 	for(int i =2;i*i<=n;i++){
// 		if(n%i == 0) return 0;
// 	}
// 	return 1;
// }
    
int main(){
    int n;
    cin >> n;
    if(isPrime(n)){
        cout << "Prime" << endl;
    }
    else cout << "Not Prime" << endl;
    return 0;
}
// Factorial Of N numbers: assume i have number n = 4 then Output will be 24 [i.e - 1*2*3*4]

// Time Complexity - O(N)
// Stack Complexity - O(N)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fac(int num){
    if(num == 0)
        return 1;
    return num*(fac(num-1));
}

int main(){
    int n;
    cin >>n;
    cout << fac(n);
    return 0;
}
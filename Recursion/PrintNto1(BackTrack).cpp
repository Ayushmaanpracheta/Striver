// Print form N to 1 using Back Tracking

// Time Complexity - O(N)
// Stack Complexity - O(N)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Num(int i, int n){
    if(i>n)
        return;
    Num(i+1,n);
    cout << i << endl;
}

int main(){
    int n;
    cin >>n;
    Num(1,n);
    return 0;
}
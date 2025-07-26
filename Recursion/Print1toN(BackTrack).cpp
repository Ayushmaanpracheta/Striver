// Print Form 1 to N using Back Tracking:

// Time Complexity - O(N)
// Stack Complexity - O(N)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Num(int i, int n){
    if(i<1)
        return;
    Num(i-1,n);
    cout << i << endl;
}

int main(){
    int n;
    cin >>n;
    Num(n,n);
    return 0;
}
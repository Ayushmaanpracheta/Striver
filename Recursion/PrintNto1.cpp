// Print from N to 1:

// Time Complexity - O(N) , because we call function n times
// Stack Complexity - O(N) , because everytime function waits for call back from another function.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Num(int i,int n){
    if(i<1)
        return;
    cout << i << endl;
    Num(i-1,n);
}

int main(){
    int n;
    cin >> n;
    Num(n,n);
    return 0;
}
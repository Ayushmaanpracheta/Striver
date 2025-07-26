// Print N times Names using Recursion: IN this we need to print names N times .

// Time Complexity - O(N) , because we call function n times
// Stack Complexity - O(N) , because everytime function waits for call back from another function.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Names(int i,int n){
    if(i>n)
        return;
    cout << "Ayush" << endl;
    Names(i+1,n);
}

int main(){
    int n;
    cin >> n;
    Names(1,n);
    return 0;
}
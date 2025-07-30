// Check if a string is palindrome or not(using recursion)

// Time Complexity - O(N)
// Stack Complexity - O(N)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(int i,int n,string &s){
    if(i>=n/2) return true;
    if(s[i]!=s[n-i-1]) return false;
    return isPalindrome(i+1,n,s);
}

int main(){
    string str;
    getline(cin,str);
    int n = str.length();
    if(isPalindrome(0,n,str)){
        cout<< "Palindrome" << endl;
    }
    else{
        cout << "not Palindrome" << endl;
    }
    return 0;
}
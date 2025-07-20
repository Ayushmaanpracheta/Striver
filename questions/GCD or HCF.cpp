// GCD - Greatest Common Divisor
// code to find GCD :
// Brute Force Apporaches :

// Approach 1:
// Time Complexity - O(min(n1,n2))
/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int gcd = 1;
    int n1,n2;
    cin >> n1 >> n2 ;
    for(int i;i<=min(n1,n2);i++){
        if(n1%i==0 &&  n2%i==0)
            gcd = i;
    }
    return 0;
}
*/

// Approach 2:
// Time Complexity - O(min(n1,n2))
/*
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cin >> n1 >> n2;
    for(int i = min(n1,n2);i>=1;i++){
        if(n1%i ==0 && n2%i==0){
            cout << i ;
            break;
        }
    }
    return 0;
}
*/

// Euclidean Algorithm: gcd(a,b) = gcd(a-b,b) , a > b........ further terverse.
// gcd(a%b,b) - > better approach {greater%smaller}
// Time Complexity - O(log phi (min(a,b)))
/*
while(a>b && b>0){
    if(a>b)   a= a%b;
    else      b= b%a;
 }
 if(a==0) return b;
 else   return a;
*/ 

// using Eculidean Algirothm
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int gcd(int n1, int n2){
    while(n1>0 && n2>0){
        if(n1>n2)  n1= n1%n2;
        else  n2= n2%n1;
    }
    if(n1==0) return n2;
    return n1;
}
int main(){
    int n1,n2;
    cin >> n1;
    cin >> n2;
    cout << gcd(n1,n2) << endl;
}
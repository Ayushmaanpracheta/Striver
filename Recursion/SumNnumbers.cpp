// Sum of first N numbers using recursion: This problem can be solved using 2 Approaches 
// Approach 1 : Parameterised 
// Approach 2: Functional

// Parameterised

// Time Complexity - O(N)
// Stack Complexity - O(N)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void sum(int i, int total){
    if(i<1){
        cout << total << endl;
        return;
    }
    sum(i-1,total+i);
}

int main(){
    int n;
    cin>>n;
    sum(n,0);
    return 0;
}


// Functional

// Time Complexity - O(N)
// Stack Complexity - O(N)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int sum(int total){
    if(total == 0){
        return 0;
    }
    return total + sum(total-1);
}

int main(){
    int n;
    cin>>n;
    cout<< sum(n) << endl;
    return 0;
}
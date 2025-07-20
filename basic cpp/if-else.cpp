// if-else statement :
/*Write a program that takes an input of age
and prints if you are adult or not.*/

//if age >= 18 , yes
//age < 18 , no
#include<iostream>
using namespace std;
int main(){
    int age;
    cin >> age;
     
    if(age>=18){
        cout << "You are an adult";
    }
    // else{ // it is not maindatory to have a else statement .
    //     cout << "Not adult";
    // }
    else if(age <18){
        cout << "Not Adult";

    }
    return 0;
}
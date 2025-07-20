// Functions :
// Functions are set of code which performs something for you.
// function are used to modularise code.
// /Function are used to increase readability.
// Function are used to use same code multiple times.
// types of functions used :
// void -> it does not return anything
// return
// parameterised
// non parameterised



#include<iostream>
using namespace std;
void printName(string name){
    cout << name << endl;
    // cout << "Abhinav " << endl;
}
int main(){
    string name;
    cin >> name;
    printName(name);

    string name2;
    cin >> name2;
    printName(name2);
    return 0;
}
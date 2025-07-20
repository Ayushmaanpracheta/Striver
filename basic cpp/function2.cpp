//  find the minimum or maximum number using functions:



// #include<iostream>
// using namespace std;
// int main(){
//     int num1, num2;
//     cin >> num1 >> num2;
//     int maximum = max(num1,num2);
//     int minimum = min(num1,num2);
//     cout << maximum << endl;
//     cout << minimum << endl;
//     return 0;
// }


//  using function:
#include<iostream>
using namespace std;
int maxx(int num1 , int num2){
    // 5>=6
    if(num1 >= num2){
        return num1; // here it will return any garbage value.
    }
    return num2;
    // looking for a return line
}
int main(){
    int num1, num2;
    cin >> num1 >> num2;
    int maximum = maxx(num1,num2);
    cout << maximum << endl;
    return 0;
}
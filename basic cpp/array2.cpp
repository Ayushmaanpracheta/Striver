// 2D array :


#include<iostream>
using namespace std;
int main(){
    int arr[3][5]; // [Row][column] 

    arr[1][3]=68;
    cout << arr[1][3];
    cout << " " << arr[1][2]; // returns the garbage value.
    return 0;
}
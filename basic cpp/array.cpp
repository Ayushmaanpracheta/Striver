/*Array - They are used to store multiple values in a single variable, instead of declaring separate variables for each value.'
To declare an array , define the variable type, specify the name of the array followed by sqaure barckets[] and specify the number of elements it should store*/



// #include<iostream>
// using namespace std;
// int main(){
//     int arr[4] = {1,2,3,4};
//     cout << arr[0] << endl; // prints 1 as output because 1 is at 0index of an array.
//     cout << arr << endl;// here it prints the memory address of first allocation.
//     int another_arr[4];
//     another_arr[0]=9;
//     another_arr[1]=19;
 
//     cout << another_arr[0] << endl;
//     cout << another_arr[1] << endl;//here output is zero because we don't initalise the value at index 1.

//     *another_arr = 26;// here updating the value of previous array index.
//     cout << another_arr[0] << endl;

//     cout << another_arr[1] << endl;// output for another_array index 1 element.
    
//     int *arr_pointer = another_arr;//here we save another_arr value to arr_pointer memory.
//     arr_pointer++;
//     *arr_pointer = 208;//updating arr_pointer memory value that is we update the value of another_arr.
//     cout << another_arr[1] << endl;

//     return 0;
// }



#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

    arr[3] += 10;
    cout << arr[3];
     
    return 0;
}
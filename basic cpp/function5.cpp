//array always pass by reference

 // pass by reference
#include<iostream>
using namespace std;
void dosomething(int arr[], int n){ // pass the original array
    arr[0]+=50;
    cout << "value inside function: " << arr[0] << endl;
}
int main(){
    int n = 5;
    int arr[n];
    for(int i = 0;i<=n-1;i++){
        cin >> arr[i];
    }
    dosomething(arr,n);//(array, length of array)

    cout << "value inside main : " << arr[0] << endl;
    return 0;
}
// #include<iostream>
// using namespace std;
// int main(){
//     int a = 32;
//     int *ptr = &a;

//     char ch = 'A';
//     char &cho = ch;

//     cho += a;
//     *ptr += ch;
//     cout << a << "," << ch << endl;
//     return 0;
// }

// Ans - 129,a;


// #include<iostream>
// using namespace std;
// int main(){
//     const int i = 20;
//     const int* const ptr = &i;
//     (*ptr)++;
//     int j = 15;
//     ptr = &j;
//     cout << i;
//     return 0;
// }

// Compile Errror

#include<iostream>
using namespace std;
int main(){
    int num[5];
    int* p; // int* = means pointer to a variable whose datatype is integer.
    p = num;
    *p = 10;
    p++;
    *p = 20;
    p = &num[2];
    *p = 30;
    p = num +3;
    *p = 40;
    p = num;
    *(p+4) = 50;
    for(int i = 0;i<5 ;i++){
        cout << num[i] << ",";
    }
    return 0;

}

//  Ans - 10,20,30,40,50
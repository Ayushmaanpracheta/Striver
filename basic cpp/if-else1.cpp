/*A school has following rules for grading system:
a.Below 25- F
b. 25-44 - E
c. 45-49 - D
d. 50-59 - C
e. 60-79 - B
f. 80-100 - A
Ask user to enter marks and print the correspondng grade.
*/ 

//Method -1
// #include<iostream>
// using namespace std;
// int main(){
//     int marks;
//     cin >> marks;
//     if(marks<25){
//         cout << "F" ;
//     }
//     if(marks >= 25 && marks <= 44){
//         cout << "E";
//     }
//     if(marks >=45 && marks <=49){
//         cout << "D";
//     }
//     if(marks >=50 && marks <=59){
//         cout << "C";
//     }
//     if(marks >=60 && marks <=79){
//         cout << "B";
//     }
//     if(marks >=80 && marks <=100){
//         cout << "A";
//     }
//     return 0;
// }

//Method 2:

 #include<iostream>
using namespace std;
int main(){
    int marks;
    cin >> marks;
    if(marks<25){
        cout << "F" ;
    }
    else if(marks <= 44){
        cout << "E";
    }
    else if(marks <=49){
        cout << "D";
    }
    else if(marks <=59){
        cout << "C";
    }
    else if(marks <=79){
        cout << "B";
    }
    else if(marks <=100){
        cout << "A";
    }
    return 0;
}
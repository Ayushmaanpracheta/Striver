// pass by reference
// it takes the orginal value from main .

// #include<iostream>
// using namespace std;
// void dosomething(string &s){ // it takes the address of the orginal or original value is passed.
//     s[0] = 't';
//     cout << s << endl;
// }
// int main(){
//     string s = "raj";
//     dosomething(s);
//     cout << s << endl; // it changes the original and prints it
//     return 0;
// }


#include<iostream>
using namespace std;
void dosomething(int &num){//it takes the original value.
    num += 90;
    cout << num << endl;
}
int main(){
    int num = 45;
    dosomething(num);
    cout << num << endl;
    return 0;
}
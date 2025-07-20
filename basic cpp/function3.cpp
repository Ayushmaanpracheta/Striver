// Pass by value:


// #include<iostream>
// using namespace std;
// void dosomething(int num){
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
//     num +=10;
//     cout << num << endl;
// }
// int main(){
//     int num = 10;
//     dosomething(num);
//     cout << num << endl;//it prints the original number.
//     return 0;
// }


#include<iostream>
using namespace std;
void dosomething(string s){
    s[0] = 't';
    cout << s << endl;
}
int main(){
    string s = "Raj";
    dosomething(s);
    cout << s << endl;
    return 0;
}
// string :


#include<iostream>
using namespace std;
int main(){
    string s = "ajay";
    int len = s.size();
    // s[len-1] = 'z'; //we can also change the character in string.
    cout << s[len-1] <<endl;
    cout << s[2];

    return 0;
}
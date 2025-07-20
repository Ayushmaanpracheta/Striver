/*INDENTIFIER - it is a unique variable, function,
                  structures and other elements in a program.
                  Do not start with numbers, or underscore
                  but they can be used in betweeen or at end.*/
                  /*_at start means private
                  __(double underscore)at start means system keyword*/

//DataTypes:

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string my_color;
//     cout << "Enter your fav. color: \n";
//     getline(cin,my_color); // Here we get input and store in my_color.
//     cout << "Hii" << my_color << "is my fav. too" << endl;
//     return 0;
// }

#include<iostream>
#include<string>
using namespace std;
int main(){
    string a_color,b_color;
    cout << "Enter color :",a_color,b_color;
    getline(cin,a_color);
    getline(cin,b_color);
    cout << "Hii " << a_color <<" is mine and yours  "<< b_color << endl;
    return 0;
}
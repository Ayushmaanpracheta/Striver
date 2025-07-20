#include<iostream>
using namespace std;
void pattern(int n){
    int initialspace =0;
    for(int i=0;i<n;i++){
        // stars
        for(int j=1;j<=n-i;j++){
            cout << "*";
        }
        // space 
        for(int j=1;j<initialspace;j++){
            cout << " ";
        }
        // stars
        for(int j=1;j<=n-i;j++){
            cout << "*";
        }
        initialspace +=2;
        cout << endl;
    }
    initialspace = 2*n-2;
    for(int i=1;i<n;i++){
        // stars
        for(int j=1;j<=i;j++){
            cout << "*";
        }
        // space 
        for(int j=1;j<initialspace;j++){
            cout << " ";
        }
        // stars
        for(int j=1;j<=i;j++){
            cout << "*";
        }
        initialspace -=2;
        cout << endl;
    }
}
int main(){
    int  n;
    cin >> n;
    pattern(n);
    return 0;
}
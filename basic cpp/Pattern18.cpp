#include<iostream>
using namespace std;
void pattern(int n){
    for(int i=0;i<=n;i++){
        // space
        for(int j=1;j<=n-i-1;j++){
            cout << " ";
        }
        // alphabet
        char ch  = 'A';
        for(int j=1;j<=2*i+1;j++){
            cout << ch;
            ch++;
        }
        // space
        for(int j=1;j<=n-i-1;j++){
            cout << " ";
        }
        cout  << endl;
    }
}
int main(){
    int n;
    cin >> n;
    pattern(n);
    return 0;
}
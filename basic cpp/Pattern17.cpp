#include<iostream>
using namespace std;
void pattern(int n){
    for(int i=0;i<=n;i++){
        char ch ='A';
        int end = (2*i+1)/2;
        // space
        for(int j=1;j<n-i-1;j++){
            cout << " ";
        }
        // alphabet
        for(int j=1;j<=2*i+1;j++){
            cout << ch;
            if(j<=end) ch++;
            else ch--;
        }
        // space
        for(int j=1;j<n-i-1;j++){
            cout << " ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    pattern(n);
    return 0;
}
#include<iostream>
using namespace std;
void pattern(int n){
    for(int i =0;i<=n;i++){
        char character = 'A'+i;
        for(int j=0;j<=i;j++){
            cout << character << " ";
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
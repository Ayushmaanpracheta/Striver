#include<iostream>
using namespace std;
void pattern(int n){
    for(int i=1;i<=n;i++){
        // number
        for(int j=1;j<=i;j++){
            if(j==1||j==i)
            cout << "1";
            else cout << "2";
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
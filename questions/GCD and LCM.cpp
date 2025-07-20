#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    vector<int> lcmAndGcd(int a, int b){
        int gcd_value = __gcd(a,b);
        int lcm_value = (a/gcd_value)*b;
        return{lcm_value,gcd_value};
    }
};
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        int A, B;
        cin >> A >> B;
        solution ob;
        vector<int> ans = ob.lcmAndGcd(A,B);
        cout << ans[0] << " "<< ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}
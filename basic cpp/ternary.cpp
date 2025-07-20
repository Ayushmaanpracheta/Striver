// ternary operator:
/*syntax:
  printf("anything",condition ? "True": "False")*/

#include<iostream>
using namespace std;
int main(){
    int rating;
    cin >> rating;
    if(rating == 5){
        cout << "5 star rating\n";
    }else if(rating == 4){
        cout << "4 star rating\n";
    }
    else if(rating == 3){
        cout << "3 star rating\n";
    }
    else if(rating == 2){
        cout << "2 star rating\n";
    }
    else if(rating == 1){
        cout << "1 star rating\n";
    }
    else{
        cout << "Invalid Rating\n" << "Give rating between 1 to 5\n";
    }
    printf("Your rating feedback is: %s\n",rating >= 1 && rating < 5 ? "True":"False");
    
    return 0;
}
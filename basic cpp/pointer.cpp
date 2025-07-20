/* POINTER - Pointer are symbolic reperesentation of addresses.
  they points a memory allocation.
  */

//  #include<iostream>
//  using namespace std;
//  int main(){
//     int life = 4;
//     int card = 40;
//     int my_card = card;
//     //cout << my_card << endl;

//     int *myp; // * - it used only when you initialise a pointer.
//     myp = &my_card; // & - its points memory address of an element.

//     my_card =*myp; // pointer dereference.
//     cout << myp << endl;
//     //printf("Value of card is:%p",myp);
//     cout << my_card << endl;
//     return 0;
//  }

 #include<iostream>
 using namespace std;
 int main(){
   int score = 200;
   int *myp = &score;

   // printf("Value of score is %d\n",score);
   cout << score << endl;
   // printf("Value of pointner is %p\n",myp);
   cout << myp << endl;

   int &another_score = score;
   another_score = 800;

   printf("Value of score is %d\n",score);
   printf("Value of pointer is %p\n",myp);

   return 0;
 }
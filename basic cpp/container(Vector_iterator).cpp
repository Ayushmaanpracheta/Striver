// Iterators : iterators are just print element inside the vector
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>::iterator it = v.begin(); // it is a type how to write iterator in vector  and v.begin() - > it points the memory address of starting element.
it++; // increase the iterator by 1 means we move to second iterator of vector at index 1.
cout << *(it)<< " ";  // it helps to print the element at memory address

it = it+2;
cout << *(it) << " ";

 // {10,20,30,40}
vector<int>::iterator it = v.end(); // it point the next to the end element in vector -> it points to after 40 
vector<int>::iterator it =v.rend(); // it first reverse the vector and then points to next to end element in vector  ->  after 10.
vector<int>::iterator it = v.rbegin(); // it reverse the vector and then points to the starting element in vector -> 40

cout << v[0] << " " v.at(0);  // point the index of vector
cout << v.back()<< " "; // it points to the last element of vector -> 40

for(vector<int>::iterator it = v.begin();it!=v.end();it++){ // this is the loop to print the vector using loop and most complicated way as we all time write its syntax.
    cout << *(it) << " ";
}

for(auto it = v,begin(); it! = v.end(); it++){  // it is the simplest way as compare to normal syntax because we use the word 'auto' -> it automatically find what type of data type is used.
    cout << *(it) << " ";
}

for(auto  it : v){ // it is the most easiest way of printing elements from the vector. 
    cout << it << " "; 
}


// what if we want to delete something from conatainer we use "erase" function.

// {10,20,30,40}
v.erase(v.begin()+1); //it will delete the element next to start that is second element of conatiner.
// {10,20,30,40,50} [start, end)
v.erase(v.begin()+2,v.begin()+4); // it will delete 2 elements at the same time , in this 2 element from starting and (end-1)th element will be deleted. {10,20,50}

// Insert function
vector<int>(2,100); //{100,100}
v.insert(v.begin(),300); //{300,100,100} means in this 300 will insert at the beginning 
v.insert(v.begin()+1,2,10); // {300,10,10,100,100} 

vector<int>copy(2,50); //{50,50}
v.insert(v.begin(),copy.begin(),copy.end()); //{50,50,300,10,10,100,100}

//{10,20}
cout << v.size(); // it gives output as size of current vector , size  = 2
// {10,20}
v.pop_back(); // it removes the last element of the given vector , {10}

//v1 -> {10,20}
// v2-> {30,40}
v1.swap(v2); //it swaps the vectors , v1 -> {30,40} and v2 -> {10,20}
v.clear(); // it erase the entire vector
cout << v.empty();
}

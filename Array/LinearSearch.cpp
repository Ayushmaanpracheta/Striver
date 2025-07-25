// LinearSearch :In this i need to find the number in the array and print its index value.
// Approach : traversing from index 0 to n.
// Time Complexity  = O(N)
// space Complexity = O(1)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int linearSearch(vector<int>arr,int nums){
    int n = arr.size();
    for(int i=0;i<n;i++){
        if(arr[i] == nums)
            return i;
    }
    return -1;
}

int main(){
    int n;
    cin >> n;
    int nums;
    cin >> nums;
    vector<int> arr(n);
    for(int i =0;i<n;i++){
        cin >> arr[i];
    }
    int result = linearSearch(arr,nums);
    if(result!=0)
        cout << result << endl;
    else
        cout << "not found" <<endl;
    return 0;
}
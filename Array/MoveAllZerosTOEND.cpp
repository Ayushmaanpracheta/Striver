// Move all zeros to the end of the array:
// In this problem , we need to shift all the zeros to the end of the array.


// Approach 1: Brute Force : Using temporary array
// Time Complexity: O(x)+O(N-x) = O(N)
// Space Complexity: O(N)

// step 1:
// temp =arr[0];
// for(int i=0;i<n;i++){
//     if(arr[i]!=0){
//         temp.push_back(arr[i]);
//     }
// }

// step 2:
// int nz = temp.size();
// for(int i=0;i<nz;i++){
//     arr[i]=temp[i];
// }

// for(int i=nz;i<n;i++){
//     arr[i]=0;
// }

// Approach 2: Optimal: Two pointer Approach
// Time Complexity : O(x)+O(N-x) = O(N)
// Space Complexity: O(1)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>moveZeros(vector<int>arr){
    int n = arr.size();
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    if(j == -1) return arr;
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    return arr;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    vector<int> result = moveZeros(arr);
    for(int i=0;i<result.size();i++){
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}

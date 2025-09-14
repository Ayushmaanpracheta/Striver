// Find Union :we have two given sorted arrays and we have to make union of these arrays


// Brute Fore : Using hashmap or using set
// Approach 1: Using set
// Time Complexity- O(n1logn + n2logn) + O(n1+n2)
// Space Complexity - O(n1+n2) + O(n1+n2)

#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

vector<int> FindUnion(vector<int>& arr1,vector<int>& arr2){
    set<int>st;
    vector<int>Union;
    for(int i=0;i<arr1.size();i++){
        st.insert(arr1[i]);
    }
    for(int i=0;i<arr2.size();i++){
        st.insert(arr2[i]);
    }
    for(auto & it:st)
        Union.push_back(it);
    return Union;
}

int main(){
    int n1;
    cin >> n1;
    int n2;
    cin >> n2;
    vector<int> arr1(n1);
    for(int i=0;i<n1;i++){
        cin >> arr1[i];
    }
    vector<int> arr2(n2);
    for(int i=0;i<n2;i++){
        cin >> arr2[i];
    }
    vector < int > Union = FindUnion(arr1, arr2);
    cout << "Union of arr1 and arr2 is  " << endl;
    for (auto & val: Union)
        cout << val << " ";
    return 0;
}

// Optimal- use Two Pointers
// Approach 2: Using Two Pointers
// Time Complexity - 
// Space Complexity -

#include<bits/stdc++.h>
using namespace std;

vector<int> FindUnion(vector<int>& arr1,vector<int>& arr2, int n1, int n2){
    //pointers
    int i=0;
    int j = 0;
    
    vector<int> Union;
    while(i<n1 && j<n2){
        if(arr1[i] <=arr2[j]){
            if(Union.size() == 0 || Union.back()!= arr1[i])
                Union.push_back(arr1[i]);
            i++;
        }
        else{
            if(Union.size() == 0 || Union.back()!= arr2[j])
                Union.push_back(arr2[j]);
            j++;
        }
    }
    while(i<n1){
        if(Union.back()!= arr1[i])
            Union.push_back(arr1[i]);
        i++;
    }
    while(j<n2){
        if(Union.back()!= arr2[j])
            Union.push_back(arr2[j]);
        j++;
    }
    return Union;
}


int main(){
    int n1,n2;
    cin >> n1 >> n2;
    vector<int> arr1(n1);
    for(int i=0;i<n1;i++){
        cin >> arr1[i];
    }
    vector<int> arr2(n2);
    for(int i=0;i<n2;i++){
        cin >> arr2[i];
    }
    vector<int> Union = FindUnion(arr1,arr2,n1,n2);
    cout << "Union of arr1 and arr2 is" << endl;
    for(auto & val : Union)
        cout << val << " ";
    return 0;
}

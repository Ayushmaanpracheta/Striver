// Left Rotate the array by one place
// In this problem, we have an array of n intergers and we need to shift all the elments of the array to the left by on place so that  the firsr element at the last index.

// Approach: Brute Force : Using temporary array
/* time complexity-O(N)
   Space Complexity-O(N)
*/

// Approach 2 : Using Cyclic Replacements
/* time complexity-O(N)
    Space Complexity-O(N) as we are using the same array to store the result
   Space Complexity-O(1) As we are not using any extra space
*/
#include <iostream>
#include <vector>
using namespace std;

vector<int> leftRotate(vector<int> arr) {
    int n = arr.size();
    int temp = arr[0];
    for (int i = 1; i < n; i++) {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
    return arr;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> rotated = leftRotate(arr);  // Make sure this line is inside main()

    for (int i = 0; i < rotated.size(); i++) {
        cout << rotated[i] << " ";
    }
    cout << endl;

    return 0;
}

// Hashing : Prestoring/fetching : It is the process of storing the data so that when we need it we can fetch it as fast as possible (basically in O(1)),
            // and for fetching we make them a 'index' or a 'key'.
            // Example: attendence system: means if we want any information of any student we can directly access them with 'Roll.no' works as 'key'
            // no need to go through all data of students.

    // Benifits: 
            /*
                Fast searching (O(1) time)
                Find Duplicates
                Counting Frequency
                Data indexing
            */


// Pseudocode:
/*
Time Complexity - O(Q*N), Q = number of elements in array, N = number of times loop runs
Space Complexity -O(n) , beause N number of elements we require an extra space

int fun(int number,arr[]){
    int count =0;
    for(int i=0;i<n;i++){
        if(arr[i]== number)
            count++;
    }
    return count;
}
*/


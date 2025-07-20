// Pairs : It is defined as <utility> header(utility library) and widely used inSTL containers and algorithms.
        // It comes under the Associative Containers : [std::map] , [std :: multimap], [std :: unordered_map], [std :: unordered_multimap].
        
void explianPairs(){
    pair<int, int> p = {1,3};
    cout << p.first << " " << p.second;  // in this p.first -> 1  and p.second -> 3

    pair<int, <int, int>> p = {1,{2,3}}; // it is an nested pair that is there will be pair into pair.
    cout << p.first << " " << p.second.second << " " << p.second.first; // p.first - > 1 , p.second.second -> 3 , p.second.first -> 2.

    pair<int, int> arr[] = {{1,2},{2,4},{4,1}}; // pairs can be any data type it can be array , string , character or integer
    cout << arr[1].second; // arr[1].second -> 4
}
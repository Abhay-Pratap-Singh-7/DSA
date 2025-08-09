#include <iostream>
using namespace std;

bool linearSearch(vector<int> &arr, int key){
    for ( int i = 0; i < arr.size(); i++ ){
        if ( arr[i] == key ){
            return true;
        }
    }
    return false;
}

// Brute
int longestConsecutiveSubstring(vector<int> &arr){
    int longest = 0;
    int count = 0;
    int key;
    for ( int i = 0; i < arr.size(); i++ ){
        count = 0;
        key = arr[i];
        while ( linearSearch(arr, key) ){
            count++;
            key++;
        }
        if ( count > longest ) longest = count;
    } 
    return longest;
}

// Better
int longestConsecutiveSubstring_M2(vector<int> &arr){
    sort(arr.begin(), arr.end());
    int longest = 0;
    int count = 1;
    for ( int i = 0; i < arr.size() - 1; i++ ){
        if ( arr[i+1] == arr[i] + 1 ) {
            count++;
        }
        else if ( arr[i+1] == arr[i] ) {
            continue;
        }
        else {
            count = 1;
        }
        if ( count > longest ){
            longest = count;
        }
    }
    return longest;
}

// Better
int longestConsecutiveSubstring_M3(vector<int> &arr){
    
}

int main(){

    cout << endl;

    vector<int> arr = {1,6,8,4,2,6,4,2,8,101,342,6432,102,103,853,104,105,106,107};

    cout << longestConsecutiveSubstring(arr) << endl;
    cout << longestConsecutiveSubstring_M2(arr) << endl;

    cout << endl;

}
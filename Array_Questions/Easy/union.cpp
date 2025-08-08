#include <iostream>
#include <vector>
#include <set>
using namespace std;

// Brute
set<int> U(vector<int> &arr1, vector<int> &arr2){
    set<int> uni;
    for ( int i = 0; i < arr1.size(); i++ ){
        uni.insert(arr1[i]);
    }
    for ( int i = 0; i < arr2.size(); i++ ){
        uni.insert(arr2[i]);
    }
    return uni;
}

// optimal
vector<int> U_M2(vector<int> &arr1, vector<int> &arr2){
    vector<int> uni;
    int n1 = arr1.size();
    int n2 = arr2.size();
    int i = 0;
    int j = 0;
    while ( i < n1 && j < n2 ){
        if ( arr1[i] <= arr2[j] ){
            if ( uni.size() == 0 || arr1[i] != uni.back() ){
                uni.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if ( uni.size() == 0 || arr2[j] != uni.back() ){
                uni.push_back(arr2[j]);
            }
            j++;
        }
    }
    while ( i < n1 ){
        if ( uni.size() == 0 || arr1[i] != uni.back() ){
            uni.push_back(arr1[i]);
        }
        i++;
    }
    while ( j < n2 ){
        if ( uni.size() == 0 || arr2[j] != uni.back() ){
            uni.push_back(arr2[j]);
        }
        j++;
    }
    return uni;
}

int main(){

    cout << endl;
    vector<int> arr1 = {1,1,2,2,3,6,8,9,10};
    vector<int> arr2 = {1,2,3,4,5};

    set<int> uni = U(arr1, arr2);

    vector<int> uni_M2 = U_M2(arr1, arr2);

    for ( auto i : uni ){
        cout << i << " ";
    }

    cout << endl;

    for ( auto i : uni_M2 ){
        cout << i << " ";
    }

    cout << endl;
    cout << endl;


}
#include <iostream>
#include <vector>
using namespace std;

bool is2Sum(vector<int> &arr, int sum){
    for ( int i = 0; i < arr.size(); i++ ){
        for ( int j = i+1 ; j < arr.size(); j++ ){
            if ( sum == arr[i] + arr[j] ){
                return true;
            }
        }
    }
    return false;
}

// Brute
vector<int> is2Sum_M1(vector<int> &arr, int sum){
    vector<int> result;
    for ( int i = 0; i < arr.size(); i++ ){
        for ( int j = i+1; j < arr.size(); j++ ){
            if ( sum == arr[i] + arr[j] ){
                result.push_back(i);
                result.push_back(j);
                return result;
            }
        } 
    }
    result.push_back(-1);
    result.push_back(-1);
    return result;
}

// Optimal
vector<int> is2Sum_M2(vector<int> &arr, int sum){
    sort(arr.begin(), arr.end());
    vector<int> result;
    int left = 0;
    int right = arr.size() - 1;
    while ( left < right ) {
        if ( (arr[left] + arr[right]) == sum ){
            result.push_back(left);
            result.push_back(right);
            return result;
        }
        else if ( sum > (arr[left] + arr[right]) ){
            left++;
        }
        else {
            right--;
        }
    }
    return result;
}

int main(){

    cout << endl;

    vector<int> arr = {2,6,3,7,9,5,4,8,6};
    int sum = 12;

    // check if there any two number in array which sums to given sum
    cout << is2Sum(arr, sum) << endl;

    // return index of elements which sums to given sum
    vector<int> result = is2Sum_M1(arr, sum);
    for ( auto i : result ){
        cout << i << " ";
    }
    cout << endl;

    // return correct index if the array is sorted else not
    vector<int> resultm2 = is2Sum_M2(arr, sum);
    for ( auto i : resultm2 ){
        cout << i << " ";
    }
    cout << endl;

    cout << endl;

}
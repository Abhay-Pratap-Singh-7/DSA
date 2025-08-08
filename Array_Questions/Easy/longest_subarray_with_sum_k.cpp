#include <iostream>
using namespace std;

// Brute TC = O(n^2)
int longestSubarray(vector<int> &num, int sum){
    vector<int> hash;
    for ( int i = 0; i < num.size(); i++ ){
        int j = i;
        int count = 0;
        int temp = 0;
        while ( temp < sum && j < num.size() ){
            temp += num[j];
            j++;
            count++;
        }
        if ( temp == sum ){
            hash.push_back(count);
        }
    }
    return *max_element(hash.begin(), hash.end());
}

// Optimal TC = O()
int longestSubarray_M2(vector<int> &arr, int sum){
    int j = 0;
    int presum = 0;
    int maxi = 0;
    for ( int i = 0; i < arr.size(); i++ ){
        
        presum += arr[i];

        while ( presum > sum && j < arr.size() ){
            presum -= arr[j];
            j++;
        } 

        if ( presum == sum && i-j+1 > maxi ){
            maxi = i-j+1;
        }
    }
    return maxi;
}

int main(){

    cout << endl;

    vector<int> num = {1,2,3,-1,-2,-3,4,6,1,2,3,4};

    int sum = 10;

    cout << longestSubarray(num, sum) << endl;
    cout << longestSubarray_M2(num, sum) << endl;
    
    cout << endl;

}
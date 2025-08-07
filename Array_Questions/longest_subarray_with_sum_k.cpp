#include <iostream>
using namespace std;

int longestSubarray(vector<int> &num, int sum){
    vector<int> hash;
    for ( int i = 0; i < num.size(); i++ ){
        int j = i;
        int count = 0;
        int temp = 0;
        while ( temp < sum || j < num.size() ){
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

int main(){

    cout << endl;

    vector<int> num = {1,2,3,4,5};

    int sum = 10;

    cout << longestSubarray(num, sum) << endl;
    
    cout << endl;

}
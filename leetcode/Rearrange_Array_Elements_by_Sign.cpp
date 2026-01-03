#include <iostream>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    int result[nums.size()];
    int pos = 0;
    int neg = 1;
    for ( int i = 0; i < nums.size(); i++ ){
        if ( nums[i] > 0 ){
            result[pos] = nums[i];
            pos = pos + 2;
        }
        else {
            result[neg] = nums[i];
            neg = neg + 2;
        }
    }
    return vector<int>(result, result + nums.size());
}

int main(){
    vector<int> v = {3,1,-2,-5,2,-4};
    vector<int> res = rearrangeArray(v);
    for ( int i = 0; i < res.size(); i++ ){
        cout << res[i] << " ";
    }
}
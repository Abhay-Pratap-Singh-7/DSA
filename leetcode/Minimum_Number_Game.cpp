#include <iostream>
using namespace std;

vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for ( int i = 1; i < nums.size(); i = i + 2 ){
            swap(nums[i-1], nums[i]);
        }
        return nums;
    }

int main(){
    vector<int> arr = {1,2,3,4};
    vector<int> result = numberGame(arr);
    for ( int i : result ){
        cout << i << " ";
    }
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {


    vector<int> nums = {0, 0, 0, 0, 1};

    int count = 0;
    for( auto i : nums){
        if(nums[i] == 0){
            count++;
        }
    }
    nums.erase(remove(nums.begin(), nums.end(), 0), nums.end());
    for(int i = 0; i < count; i++){
        nums.push_back(0);

    }


    for(auto it : nums){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}   
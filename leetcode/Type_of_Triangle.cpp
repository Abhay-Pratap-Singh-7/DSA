#include<iostream>
using namespace std;

string triangleType(vector<int>& nums) {
        int temp = 0;
        if ( nums[0] + nums[1] <= nums[2] ) return "none";
        else if ( nums[1] + nums[2] <= nums[0] ) return "none";
        else if ( nums[2] + nums[0] <= nums[1] ) return "none"; 
        for ( int i = 0; i < 3; i++ ){
            for ( int j = 0; j < 3; j++ ){
                if ( nums[i] == nums[j] ) temp++;
            }
        }
        if ( temp == 9 ) return "equilateral";
        else if ( temp == 3 ) return "scalene";
        else return "isosceles";
    }

int main()
{
    vector<int> tri = {1,2,3};
    cout << triangleType(tri);
    return 0;
}
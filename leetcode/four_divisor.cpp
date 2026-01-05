#include <iostream>
using namespace std;

int sumFourDivisors(vector<int> &nums)
{
    int divisors = 0;
    int sum = 0;
    for ( int i = 0; i < nums.size(); i++ ){
        divisors = 0;
        vector<int> arr;
        for ( int j = 1; j <= nums[i]; j++ ){
            if ( nums[i] % j == 0 ){
                divisors++;
                arr.insert(arr.end(), j);
            }
            if ( divisors > 4 ) break;
        }
        if ( divisors == 4 ){
            for ( auto i : arr ){
                sum += i;
            }
        }
    }
    return sum;
}

int main()
{
    vector<int> v = {7286,18704,70773,8224,91675};
    cout << sumFourDivisors(v);
}
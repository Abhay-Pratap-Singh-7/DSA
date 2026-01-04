#include <iostream>
using namespace std;

int sumFourDivisors(vector<int> &nums)
{
    int sum = 0;
    int count = 0;
    int arr[4] = {0};
    for ( int i = 0; i < nums.size(); i++ ){
        count = 0;
        int flag = 0;
        for ( int j = 1; j <= nums[i]; j++ ){
            if ( nums[i] % j == 0 ){
                arr[count] = j;
                count++;
                cout << j << " ";
                if ( count > 4 ){
                    flag = 1;
                    cout << "Flag = " << flag << " ";
                    break;
                }
                cout << "Flag = " << flag << " ";
            }
        }
        if ( flag == 0 && count == 4 ){
            for ( int i = 0; i < 4; i++ ){
                sum += arr[i];
            }
        }
        cout << sum << endl;
    }
    return sum;
}

int main()
{
    vector<int> v = {7286,18704,70773,8224,91675};
    cout << sumFourDivisors(v);
}
#include <iostream>
using namespace std;

int tribonacci(int n)
{
    int arr[n + 1];
    for (int i = 0; i <= n; i++)
    {
        if (i == 0)
            arr[i] = 0;
        else if (i == 1)
            arr[i] = 1;
        else if (i == 2)
            arr[i] = 1;
        else
            arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
    }
    return arr[n];
}

int main()
{
    int n = 4;
    cout << tribonacci(n);
    return 0;
}
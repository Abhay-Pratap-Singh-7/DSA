#include<iostream>
using namespace std;

bool isBadVersion(int n){
    return true;
}

int firstBadVersion(int n) {
        if (n == 1) return 1;
        int left = 1;
        int right = n;
        while (left <= right) {
            int mid = ((right - left) / 2) + left;
            if (isBadVersion(mid)) {
                right = mid-1;
            } else {
                left = mid+1;
            }
            if (isBadVersion(mid) && !isBadVersion(mid-1)) return mid;
        }
        return -1;
    }

int main()
{
    int n = 5;
    cout << firstBadVersion(n);
    return 0;
}
#include <iostream>
using namespace std;

int main(){

    // taking input for number of lines
    int n;
    cout << "Enter number of lines of: ";
    cin >> n;

    // for numbering in pattern
    int count;

    // printing the pattern
    for(int i = 1; i <= n; i++){
        count = 65;
        for(int j = 1; j < n-i+1; j++){
            cout << "  ";
        }
        for(int j = 1; j <= i; j++){
            cout << " " << char(count);
            count++;
        }
        count = 65;
        for(int j = 1; j <= i-1; j++){
            cout << " " << char(count+i-2);
            count--;
        }
        cout << endl;
    }

}
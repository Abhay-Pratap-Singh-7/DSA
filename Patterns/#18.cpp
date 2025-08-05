#include <iostream>
using namespace std;

int main(){

    // taking input for number of lines
    int n;
    cout << "Enter number of lines of: ";
    cin >> n;

    int count = 65;

    // printing the pattern
    for(int i = n; i >= 1; i--){
        for(int j = n; j >= i; j--){
            cout << " " << char(count+j-1);
        }
        cout << endl;
    }

}
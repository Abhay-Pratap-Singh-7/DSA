#include <iostream>
using namespace std;

int main(){

    // taking input for number of lines
    int m;
    cout << "Enter number of lines of: ";
    cin >> m;

    // taking input for number of stars in a line
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    // printing the pattern
    for(int i = m; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            cout << " " << j;
        }
        cout << endl;
    }

}
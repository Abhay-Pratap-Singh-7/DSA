#include <iostream>
using namespace std;

int main(){

    // taking input for number of lines
    int m;
    cout << "Enter number of lines of: ";
    cin >> m;

    // taking input for number of stars in a line
    int n;
    cout << "Enter number of stars in each line: ";
    cin >> n;

    // printing the pattern
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << " *";
        }
        cout << endl;
    }

}
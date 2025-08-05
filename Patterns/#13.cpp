#include <iostream>
using namespace std;

int main(){

    // taking input for number of lines
    int m;
    cout << "Enter number of lines of: ";
    cin >> m;

    // for numbering in pattern
    int count = 1;

    // printing the pattern
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= i; j++){
            cout << " " << count;
            count++;
        }
        cout << endl;
    }

}
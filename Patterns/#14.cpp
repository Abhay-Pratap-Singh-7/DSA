#include <iostream>
using namespace std;

int main(){

    // taking input for number of lines
    int m;
    cout << "Enter number of lines of: ";
    cin >> m;

    // for numbering in pattern
    int count;

    // printing the pattern
    for(int i = 1; i <= m; i++){
        count = 65;
        for(int j = 1; j <= i; j++){
            cout << " " << char(count);
            count++;
        }
        cout << endl;
    }

}
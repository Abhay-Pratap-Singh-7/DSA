#include <iostream>
using namespace std;

int main(){

    // taking input for number of lines
    int m;
    cout << "Enter number of lines of: ";
    cin >> m;

    // printing the pattern
    for(int i = m; i >= 1; i--){

        // for spaces before star
        for(int j = m; j > i; j--){
            cout << "  ";
        }

        // for stars
        for(int j = 1; j <= (i+i)-1; j++){
            cout << " *";
        }

        cout << endl;
    }

}
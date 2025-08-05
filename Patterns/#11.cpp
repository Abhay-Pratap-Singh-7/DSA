#include <iostream>
using namespace std;

int main(){

    // taking input for numbers of lines
    int n;
    cout << "Enter the numbers of lines: ";
    cin >> n;

    // printing the pattern
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            if((i-j+1) % 2 == 0){
                cout << " " << 0;
            }
            else {
                cout << " " << 1;
            }
        }
        cout << endl;
    }
}
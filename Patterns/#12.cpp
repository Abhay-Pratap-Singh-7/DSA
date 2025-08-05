#include <iostream>
using namespace std;

int main(){

    // taking input for number of lines
    int n;
    cout << "Enter number of lines: ";
    cin >> n;

    // priting the pattern
    for(int i = 1; i <= n; i++){

        // increasing order with number
        for(int j = 1; j <= i; j++){
            cout << " " << j;
        }
        // decreasing spaces for first square
        for(int j = n-i; j >= 1; j--){
            cout << "  ";
        }
        // decreasing spaces for seconf square
        for(int j = n-i; j >= 1; j--){
            cout << "  ";
        }
        // number part of second square
        for(int j = 1; j <= i; j++){
            cout << " " << i-j+1;
        }
        cout << endl;
    }
    

}
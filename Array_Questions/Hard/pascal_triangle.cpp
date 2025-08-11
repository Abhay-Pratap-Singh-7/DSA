#include <iostream>
using namespace std;

int getElement(int row, int col){
    int ncr = 1;
    for ( int i = 1; i <= col-1; i++ ){
        ncr = ncr * (row - i) / i;
    }
    return ncr;
}

void printRow(int row){
    int ncr;
    for ( int i = 1; i <= row; i++ ){
        cout << getElement(row, i) << " ";
    }
    cout << endl;
}

void printTriangle(int row){
    for ( int i = 1; i <= row; i++ ){
        for ( int j = 1; j <= row - i; j++ ){
            cout << " ";
        }
        printRow(i);
    }
}

int main(){

    cout << endl;
    
    int row;
    cout << "enter row number: ";
    cin >> row;

    printTriangle(row);

    cout << endl;

    

}
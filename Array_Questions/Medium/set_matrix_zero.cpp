#include <iostream>
using namespace std;

// Brute TC = O(2mn)
void zeroMat(vector<vector<int>> &arr, int row, int col){
    int mark_row[row];
    int mark_col[col];
    cout << endl;
    for ( int i = 0; i < row; i++ ){
        for ( int j = 0; j < col; j++ ){
            if ( arr[i][j] == 0 ){
                mark_row[i] = 1;
                mark_col[j] = 1;
            }
        }
    }
    for ( int i = 0; i < row; i++ ){
        for ( int j = 0; j < col; j++ ){
            if ( mark_row[i] == 1 || mark_col[j] == 1 ){
                arr[i][j] = 0;
            }
        }
    }
}

int main(){

    cout << endl;

    vector<vector<int>> arr = {
        {0,2,3},
        {4,5,6},
        {7,8,0}
    };
    int row = 3;
    int col = 3;

    for ( int i = 0; i < 3; i++ ){
        for ( int j = 0; j < 3; j++ ){
            cout << " " << arr[i][j] << " ";
        }
        cout << endl;
    }

    zeroMat(arr, row, col);

    for ( int i = 0; i < 3; i++ ){
        for ( int j = 0; j < 3; j++ ){
            cout << " " << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

}
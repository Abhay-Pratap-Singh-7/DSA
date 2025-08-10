#include <iostream>
using namespace std;

// Brute TC = O(2(n^2)) SC = O(n^2)
void rotateArray(vector<vector<int>> &arr, int row, int col){
    int temp[row][col];
    for ( int i = 0; i < row; i++ ){
        for ( int j = 0; j < col; j++ ){
            temp[i][j] = arr[row-j-1][i];
        }
    }
    for ( int i = 0; i < row; i++ ){
        for ( int j = 0; j < col; j++ ){
            arr[i][j] = temp[i][j];
        }
    }
}

// Optimal TC = O(2(n^2)) SC =O(0)
void rotateArray_M2(vector<vector<int>> &arr, int row, int col){
    for ( int i = 0; i < row; i++ ){
        for ( int j = i; j < col; j++ ){
            swap( arr[i][j], arr[j][i] );
        }
    }
    for ( int i = 0; i < row; i++ ){
        for ( int j = 0; j < col/2; j++ ){
            swap( arr[i][j], arr[i][col-j-1]);
        }
    }
}

int main(){

    cout << endl;

    vector<vector<int>> arr = {{1,2,3,4},{5,6,7,8},{1,2,3,4},{5,6,7,8}};
    int row = 4;
    int col = 4;

    for ( int i = 0; i < row; i++ ){
        for ( int j = 0; j < col; j++ ){
            cout << " " << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    rotateArray_M2(arr, row, col);

    for ( int i = 0; i < row; i++ ){
        for ( int j = 0; j < col; j++ ){
            cout << " " << arr[i][j] << " ";
        }
        cout << endl;
    }

}
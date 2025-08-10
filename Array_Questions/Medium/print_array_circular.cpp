#include <iostream>
using namespace std;

void printArrayCircular(vector<vector<int>> &mat, int row, int col){
    int top = 0;
    int left = 0;
    int bottom = row - 1;
    int right = col - 1;
    int count = 1;
    while ( count < (row*col) ){
        for ( int i = 0; i <= right; i++ ){
            cout << mat[top][i] << " ";
            count++;
        }
        top++;
        for ( int i = top; i <= bottom; i++ ){
            cout << mat[i][right] << " ";
            count++;
        }
        right--;
        for ( int i = right-1; i >= left; i-- ){
            cout << mat[bottom][i] <<" ";
            count++;
        }
        left++;
        for ( int i = bottom-1; i > top; i-- ){
            cout << mat[i][left] << " ";
            count++;
        }
        bottom--;
    }
}

int main(){

    cout << endl;

    vector<vector<int>> mat = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int row = 3;
    int col = 4;

    for ( int i = 0; i < row; i++ ){
        for ( int j = 0; j < col; j++ ){
            cout << " " << mat[i][j] << " ";
        }
        cout << endl;
    }

    printArrayCircular(mat, row, col);

}
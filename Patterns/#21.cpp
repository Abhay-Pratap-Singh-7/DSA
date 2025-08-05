#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the number of lines: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        if(i == 1 || i == n){
            for(int j = 1; j <= n; j++){
                cout << " *";
            }
            cout << endl;
        }
        else{
            cout << " *";
            for(int j = 2; j <= n - 1; j++){
                cout << "  ";
            }
            cout << " *";
            cout << endl;
        }
    }

}
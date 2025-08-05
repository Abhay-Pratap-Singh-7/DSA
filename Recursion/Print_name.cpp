#include <iostream>
using namespace std;

void print(int n, int count){
    if( n >= count ){
        cout << "DADDY" << endl;
        count++;
        print(n, count);
    }
    return ;
}

int main(){
    int n; 
    int count = 1;
    cout << "Enter number of times to print: ";
    cin >> n;
    print(n, count);
}
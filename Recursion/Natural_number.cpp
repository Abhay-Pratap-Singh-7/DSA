#include <iostream>
using namespace std;

void printNatural(int n, int count){

    if ( count <= n ){
        cout << count << endl;
        count++;
        printNatural(n, count);
    }

}

int main(){

    int n;
    cout << "Enter last natural number: ";
    cin >> n;

    int count = 1;

    printNatural(n, count);

}
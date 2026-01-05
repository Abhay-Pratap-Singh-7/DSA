#include <iostream>
using namespace std;

void TOH(int n, char from, char aux, char to){
    if ( n == 1 ){
        cout << "Move disk " << n << " from " << from << " to " << to << endl;
    }
    else {
        TOH(n-1, from, to, aux);
        cout << "Move disk " << n << " from " << from << " to " << to << endl;
        TOH(n-1, aux, from, to);
    }
}

int main(){
    int n = 2;
    TOH(n, 'A', 'B', 'C');
}
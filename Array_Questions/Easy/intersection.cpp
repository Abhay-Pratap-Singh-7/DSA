#include <iostream>
using namespace std;

// brute TC=O( a.size()*b.size() )
vector<int> I(vector<int> &a, vector<int> &b){
    vector<int> inter;
    for ( int i = 0; i < a.size(); i++ ){
        for ( int j = 0; j < b.size(); j++ ){
            if ( inter.size() == 0 || (a[i] == b[j] && inter.back() != a[i]) ){
                inter.push_back(a[i]);
            }
        }
    }
    return inter;
}

int main(){

    cout << endl;
    vector<int> a = {1,1,2,2,3,4,6,8,9,10};
    vector<int> b = {1,2,3,4,5};

    vector<int> inter = I(a, b);

    for ( auto i : inter ){
        cout << i << " ";
    }

    cout << endl;
    cout << endl;

}
#include <iostream>

using namespace std;

vector<int> v = {1,2,3,4,5};

int main(){

    for(auto it : v){
        cout << it << " ";
    }
    cout << endl;

    v.erase(v.begin()+1);

    for(auto it : v){
        cout << it << " ";
    }
    cout << endl;
    

}



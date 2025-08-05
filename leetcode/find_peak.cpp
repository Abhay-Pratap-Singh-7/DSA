#include <iostream>
using namespace std;

int findPeak(vector<int>& v){

    for(int i = 0; i < v.size(); i++){
        if( v[i] > v[i+1]){
            return v[i];
        }
    }
    return 0;

}

int main(){

    vector<int> v = {1,2,3,1};

    cout << findPeak(v) << endl;;

}
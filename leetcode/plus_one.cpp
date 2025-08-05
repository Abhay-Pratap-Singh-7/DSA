#include <iostream>
using namespace std;

void plusOne(vector<int>& num){

    int last_digit = num.back();
    last_digit++;
    num.pop_back();
    if( last_digit > 9 ){
        int temp1 = last_digit % 10;
        int temp2 = last_digit / 10;

        num.push_back(temp2);
        num.push_back(temp1);

    }
    else{
        num.push_back(last_digit);
    }

}

int main(){

    vector<int> v = {9};
    
    plusOne(v);

    for(auto i : v){
        cout << " " << i;
    }
    cout << endl;


}
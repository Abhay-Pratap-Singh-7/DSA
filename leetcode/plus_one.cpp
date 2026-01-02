#include <iostream>
using namespace std;

vector<int> plusOne(vector<int>& digits){

    if ( digits[digits.size()-1] != 9 ){
            digits[digits.size()-1] += 1;
        }
        else {
            int pointer = digits.size()-1;
            while ( digits[pointer] == 9 && pointer > 0 ){
                digits[pointer] = 0;
                pointer--;
            }
            if ( pointer == 0 && digits[pointer] == 9 ){
                digits[pointer] = 0;
                digits.insert(digits.begin(), 1);
            }
            else{
                digits[pointer] += 1;
            }
            
        }

        return digits;

}

int main(){

    vector<int> v = {9};
    
    v = plusOne(v);

    for ( int i = 0; i < v.size(); i++ ){
        cout << v[i] << " ";
    }
}
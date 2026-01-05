#include <iostream>
using namespace std;

int minDeletionSize(vector<string>& strs) {
        int result = 0;
        for ( int i = 0; i < strs[0].size(); i++ ){
            for ( int j = 0; j < strs.size()-1; j++ ){
                cout << strs[j][i] << " ";
                if ( (int)strs[j][i] > (int)strs[j+1][i] ){
                    result++;
                    break;
                }
            }
            cout << endl;
        }
        return result;
    }

    int main(){
        vector<string> strs = {"zyx","wvu","tsr"};
        cout << minDeletionSize(strs);
    }
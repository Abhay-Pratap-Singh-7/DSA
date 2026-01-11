#include<iostream>
using namespace std;

bool judgeCircle(string moves) {
        int h = 0;
        int v = 0;
        for ( int i = 0; i < moves.length(); i++ ){
            if ( moves[i] == 'U' ) v++;
            else if ( moves[i] == 'D' ) v--;
            else if ( moves[i] == 'L' ) h--;
            else if ( moves[i] == 'R' ) h++;
        }
        if ( v == 0 && h == 0 ) return true;
        return false;
    }

int main()
{
    string moves = "LL";
    cout << judgeCircle(moves);
    return 0;
}
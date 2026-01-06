#include <iostream>
using namespace std;

char st[10000];
int top = -1;


void push(char a)
{
    if ( top == 9999 )
    {
        return;
    }
    else
    {
        top++;
        st[top] = a;
        for ( int i = 0; i <= top; i++ ){
            cout << st[i] << " ";
        }
    }
}

char pop()
{
    char toPop;
    if (top == -1)
    {
        return '\0';
    }
    else
    {
        toPop = st[top];
        top--;
    }
    return toPop;
}

bool isValid(string s)
{

    char toScan;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            push(s[i]);
        }
        else
        {
            toScan = pop();
            if ( s[i] == ')' && toScan != '(' ) return false;
            else if ( s[i] == '}' && toScan != '{' ) return false;
            else if ( s[i] == ']' && toScan != '[' ) return false;
            else if ( toScan == '\0' ) return false;
        }
    }
    return ( top == -1 );
}

int main()
{
    string s = "[{(({[]}))}]";
    cout << isValid(s);
}

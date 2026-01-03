#include <iostream>
using namespace std;

int numWaterBottles(int numBottles, int numExchange)
{
    int drink = 0;
    int empty = 0;
    do
    {
        drink += numBottles;
        empty += numBottles;
        numBottles = empty / numExchange;
        empty = empty % numExchange;
    } while (empty >= numExchange || numBottles > 0);
    return drink;
}

int main()
{
    int numBottles = 9;
    int numExchange = 3;
    cout << numWaterBottles(numBottles, numExchange) << endl;
    return 0;
}
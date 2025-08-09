#include <iostream>
using namespace std;

int getMaxProfit(vector<int> &price){
    int buy = 0;
    int sell = 1;
    int current_profit = 0;
    int profit = 0;
    for ( int i = 0; i < price.size(); i++ ){
        if ( price[sell] < price[buy] ){
            buy = sell;
        }
        current_profit = price[sell] - price[buy];
        if ( current_profit > profit ) {
            profit = current_profit;
        }
        sell++;
    }
    return profit;
}

int main(){

    cout << endl;

    vector<int> price = {7,1,3,4,7,5};

    cout << getMaxProfit(price) << endl;

    cout << endl;

}
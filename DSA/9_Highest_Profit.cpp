#include <iostream>
#include <vector>
using namespace std;

int highest_profit(vector <int> prices) {
    int SP = prices[0], BP = prices[0];
    int buying_day = 0, selling_day = 0, profit = 0;
    int size = prices.size();

    for (int i = 1; i < size; i++) {
        if (prices[i] - BP > profit) {
            selling_day = i;
            SP = prices[i];
            profit = SP - BP;
        } else if (prices[i] < BP) {
            buying_day = i;
            BP = prices[i];
            if (buying_day > selling_day) {
                selling_day = buying_day;
                SP = BP;
            }
        }
    }
    return profit;
}

int main() {
    // vector <int> prices {7, 3, 5, 1, 6, 4};
    vector <int> prices {2, 4, 1};
    cout << highest_profit(prices) << endl;
    return 0;
}
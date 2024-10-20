#include <iostream>
#include <vector>
using namespace std;

int highest_profit(vector <int> prices) {
    // int SP = prices[0], BP = prices[0];
    int buying_day = 0, selling_day = 0, profit = 0;
    int size = prices.size();

    for (int i = 1; i < size; i++) {
        if (prices[i] - prices[buying_day] > profit) {
            selling_day = i;
            profit = prices[i] - prices[buying_day];
        } else if (prices[i] < buying_day) {
            buying_day = i;
            if (buying_day > selling_day) selling_day = buying_day;
        }
    }
    return profit;
}
// Simplified
int max_profit(vector <int> prices) {
    int best_buy{prices[0]};
    int max_profit{0};

    for (unsigned int i = 1; i < prices.size(); i++) {
        if (prices[i] > best_buy)
            max_profit = max(max_profit, prices[i] - best_buy);
        best_buy = min(prices[i], best_buy);
    }
    return max_profit;
}

int main() {
    // vector <int> prices {7, 3, 5, 1, 6, 4};
    vector <int> prices {2, 4, 1};
    cout << highest_profit(prices) << endl;
    cout << max_profit(prices) << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n{5};
    // int arr[] {3, -4, 5, 4, -1, 7, -8};
    int arr[] {-11, -2, -3, -4, -5};

    // Print All Sub-Arrays
    // for (int i = 0; i < n; i++) {
    //     for (int j = i; j < n; j++) {
    //         for (int k = i; k <= j; k++) {
    //             cout << arr[k];
    //         }
    //         cout << " ";
    //     }
    //     cout << endl;
    // }

    // Maximum SubArray Sum - Brute Force Method(Optimized) Time Complexity: O(n^2)
    int max_sum{INT_MIN};
    int current_sum{};

    // for (int st = 0; st < n; st++) {
    //     current_sum = 0;
    //     for (int end = st; end < n; end++) {
    //         current_sum += arr[end];
    //         max_sum = max(current_sum, max_sum);
    //     }
    // }
    // cout << max_sum << endl;

    // Kedane's Algorithm(Most Optimized) Time Complexity: O(n)
    max_sum = INT_MIN;
    current_sum = 0;

    for (int st = 0; st < n; st++) {
        current_sum += arr[st];
        max_sum = max(current_sum, max_sum);
        if (current_sum < 0) {
            current_sum = 0;
        }
    }

    cout << max_sum << endl;

    return 0;
}
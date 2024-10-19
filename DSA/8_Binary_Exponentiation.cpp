#include <iostream>
using namespace std;

// double power_recursive(double a, int n) {
//     if (n == 0) return 1;
//     if (n < 0) {
//         a = 1/a;
//         n = -n;
//     }
//     double tmp = power_recursive(a, n/2);
//     double result = tmp * tmp;
//     if (n % 2 == 1) result *= a;
//     return result;
// }

double power_iterative(double a, int n) {
    double result{1};
    if (n < 0) a = 1/a;
    while (n) {
        if (n%2) result *= a;
        a *= a;
        n /= 2; 
    }
    return result;
}

int main() {
    int a = 2, n = -2;
    cout << "Recursive: " << power_recursive(a, n) << endl;
    cout << "Iterative: " << power_iterative(a, n) << endl;
    return 0;
}
#include <iostream>
using std::cout;

int main() {
    // DECLARATION
    // Method 1
    int array_1[26];
    
    // Method 2
    const int ARRAY_SIZE = 5;
    int array_2[ARRAY_SIZE]; // Array size needs to be a constant and cannot be a variable because the size of an array needs to be known at compile time. 

    // INITIALIZATION
    //Method 1
    int array_3[5] = {1, 2, 3, 4, 5};

    // Method 2
    int array_4[4] {9, 5, 8, 2};

    // Method 3
    int array_5[10] {3, 5}; // Init to 3, 5 and the rest to 0.

    // Method 4
    const int X {5};
    int array_6[X] {0};  // Init all to zero. We can also use '{}' instead of '{0}'.

    // Method 5
    int last_array[] {1, 2, 3, 4, 5};
    
    return 0;
}
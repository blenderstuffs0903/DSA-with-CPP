#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> nums {2, 2, 1};
    // vector <int> nums {4, 1, 2, 1, 2};
    int unique_num{};
    //     bool is_unique;
    //     int vector_size = nums.size();
    //     for (int i = 0; i < vector_size; i++) {
    //         unique_num = nums.at(i);
    //         is_unique = true;
    //         for (int j = 0; j < vector_size; j++) {
    //             if (j != i) {
    //                 if (unique_num == nums.at(j)) {
    //                     is_unique = false;
    //                     break;
    //                 }
    //             }
    //         }
    //         if (is_unique) {
    //             std::cout << unique_num << std::endl;
    //             break;
    //         }
    //     }
    for (int ele : nums) {
        unique_num ^= ele;
    }
    cout << unique_num;
    return 0;
}
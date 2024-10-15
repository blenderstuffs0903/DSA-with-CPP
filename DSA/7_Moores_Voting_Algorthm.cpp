#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector <int> nums {1, 4, 2, 4, 4};
    int nums_size = nums.size();
    int freq{1};

    // Brute Force
    // for (int i = 1; i < nums_size; i++) {
    //     freq = 1;
    //     for (int j = i; j < nums_size; j++) {
    //         if (nums.at(j) == nums.at(i-1)) {
    //             freq++;
    //         }
    //     }
    //     if (freq > nums_size/2) {
    //         cout << nums.at(i-1) << endl;
    //         break;
    //     }
    // }
    
    // Optimized
    // sort(nums.begin(), nums.end()); // {1, 2, 2, 2, 4}
    // nums_size = nums.size();
    // cout << nums_size << endl;
    // freq = 0;
    // int current_ele {nums.at(0)};

    // // for (int i : nums) {
    // //     if (freq > size/2) {
    // //         cout << current_ele << endl;
    // //         break;
    // //     }
    // //     if (current_ele != i) {
    // //         current_ele = i;
    // //         freq = 0;
    // //     }
    // //     freq++;
    // // }

    // freq = 1;
    // for (int i = 1; i < nums_size; i++) {
    //     if (nums.at(i) == nums.at(i-1)) {
    //         freq++;
    //         if (freq > nums_size/2) {
    //             cout << nums.at(current_ele) << endl;
    //             break;
    //         }
    //     } else {
    //         freq = 1;
    //         current_ele = nums.at(i);
    //     }
    // }

    // Moore's Voting Algorithm
    nums = {1, 2, 2, 4, 2};
    nums_size = nums.size();
    freq = 1;
    int ans{nums.at(0)};

    for (int i = 1; i < nums_size; i++) {
        if (freq == 0) ans = nums.at(i);
        
        if (ans == nums.at(i)) freq++; 
        
        else freq--; 
    }
    cout << ans << endl;
    return 0;
}
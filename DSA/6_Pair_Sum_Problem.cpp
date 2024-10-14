#include <iostream>
#include <vector>
using namespace std;

vector <int> pairSum(vector <int> nums, int target) {
    vector <int> indices(2, -1);
    int size = nums.size();
    // Brute Force
    // for (int i = 0; i < size; i++) {
    //     for (int j = i + 1; j < size; j++) {
    //         if (nums[i] + nums[j] == target) {
    //             indices[0] = i;
    //             indices[1] = j;
    //             return indices;
    //         }
    //     }
    // }

    // Optimal
    int i{}, j{size-1};
    while (i < j) {
        if (nums[i] + nums[j] < target) {
            i++;
        } else if (nums[i] + nums[j] > target) {
            j--;
        } else {
            indices.at(0) = i;
            indices.at(1) = j;
            return indices;
        }
    }
    return indices;
}

int main() {
    // Brute Force
    vector <int> nums {2, 7, 11, 15};
    int target {9};
 
    vector <int> indices = pairSum(nums, target);
    cout << "The indices are: " << indices.at(0) << " and " << indices.at(1) << endl;
    return 0;
}
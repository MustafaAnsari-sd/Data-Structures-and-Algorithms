#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int idx = -1;

        // 1. Find pivot index
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                idx = i;
                break;
            }
        }

        // If no next permutation exists
        if (idx == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // 2. Reverse suffix
        reverse(nums.begin() + idx + 1, nums.end());

        // 3. Find smallest number greater than nums[idx]
        for (int i = idx + 1; i < n; i++) {
            if (nums[i] > nums[idx]) {
                swap(nums[i], nums[idx]);
                break;
            }
        }
    }
};

// int main() {
//     Solution sol;

//     vector<int> nums = {1, 2, 3};
//     sol.nextPermutation(nums);

//     for (int x : nums) {
//         cout << x << " ";
//     }
//     cout << endl;

//     return 0;
// }

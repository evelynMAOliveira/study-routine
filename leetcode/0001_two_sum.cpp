/*
    Pattern: Brute Force | Hash Map
    Complexity: O(n^2) | O(n)
    Date: 2026-05-09
    Approach: First, checking every pair of numbers manually.
    Now, using a hash table to check, for every element in nums, if their
    complement is already a key on the table, and if it is, return its
    value (key: number in nums, value: its index) and current index.
*/

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
  public:
    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int, int> num_map;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int complement = target - nums[i];
            if (num_map.count(complement)) {
                return {num_map[complement], i};
            }
            num_map[nums[i]] = i;
        }

        return {};
    }
};

int main() {
    vector<int> v = {1, 2, 3, 4, 7};
    int t = 8;

    Solution s = Solution();
    vector<int> sa = s.twoSum(v, t);

    for (int i = 0; i < sa.size(); i++) {
        cout << sa[i];
    }
    cout << '\n';

    return 0;
}
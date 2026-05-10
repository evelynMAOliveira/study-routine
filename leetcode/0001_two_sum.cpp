/*
    Pattern: Brute Force
    Complexity: O(n^2)
    Date: 2026-05-09
    Approach: First, checking every pair of numbers manually.
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    vector<int> twoSum(vector<int> &nums, int target) {
        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
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
}
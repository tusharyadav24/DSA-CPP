#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void helper(vector<int>& nums, int i, vector<int>& subset, vector<vector<int>>& ans) {
        // Base Case: jab saare elements par decision ho jaaye (same as str.length() == 0)
        if (i == nums.size()) {
            ans.push_back(subset);
            return;
        }

        // 1. Include nums[i] (same as subset + ch)
        subset.push_back(nums[i]);
        helper(nums, i + 1, subset, ans);

        // Backtrack: include wali call ke baad element hatao taaki exclude call clean rahe
        subset.pop_back();

        // 2. Exclude nums[i] (same as passing subset unchanged)
        helper(nums, i + 1, subset, ans);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> subset;
        helper(nums, 0, subset, ans);
        return ans;
    }
};
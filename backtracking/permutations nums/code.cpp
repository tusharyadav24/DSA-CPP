#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void permutations(vector<int>& nums, vector<int>& ans, vector<vector<int>>& res) {
        int n = nums.size();
        if (n == 0) {
            res.push_back(ans);
            return;
        }
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            vector<int> nextNums = nums;
            nextNums.erase(nextNums.begin() + i);
            ans.push_back(num);
            permutations(nextNums, ans, res);
            ans.pop_back();
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> ans;
        permutations(nums, ans, res);
        return res;
    }
};
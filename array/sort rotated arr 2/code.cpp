#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool helper(vector<int>& nums, int si, int ei, int tar) {
        if (si > ei) {
            return false;
        }
        int mid = si + (ei - si) / 2;
        if (nums[mid] == tar) {
            return true;
        }
        if (nums[si] == nums[mid] && nums[mid] == nums[ei]) {
            return helper(nums, si + 1, ei - 1, tar);
        }
        if (nums[si] <= nums[mid]) {
            if (nums[si] <= tar && tar <= nums[mid]) {
                return helper(nums, si, mid - 1, tar);
            } else {
                return helper(nums, mid + 1, ei, tar);
            }
        } else {
            if (nums[mid] <= tar && tar <= nums[ei]) {
                return helper(nums, mid + 1, ei, tar);
            } else {
                return helper(nums, si, mid - 1, tar);
            }
        }
    }

    bool search(vector<int>& nums, int target) {
        return helper(nums, 0, nums.size() - 1, target);
    }
};
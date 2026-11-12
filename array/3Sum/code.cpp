#include<iostream>
#include<vector>
#include<algorithm>
using namespace  std;
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < nums.size() - 2; ++i) {
            if(i > 0 and nums[i] == nums[i-1]) continue;
            if (nums[i] > 0) break;
            int left = i + 1;
            int right = nums.size() - 1;
            while(left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                if(sum > 0) --right;
                else if(sum < 0) ++left;
                else 
                {
                    res.push_back({nums[i], nums[left], nums[right]});
                    ++left;
                    --right;
                    while(left < right and nums[left - 1] == nums[left]) ++left;
                    while(left < right and nums[right + 1] == nums[right]) --right;
                }
                
            }
        }

        return res;
    }

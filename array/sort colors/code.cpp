#include<iostream>
#include<vector>
using namespace std;
    void sortColors(vector<int>& nums) {
        int i=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]!=2){
                swap(nums[j],nums[i]);
                i++;
            }
        }
        int end=i;
        i=0;
        for(int j=0;j<end;j++){
            if(nums[j]!=1){
                swap(nums[j],nums[i]);
                    i++;
            }
        }
    }
int main(){
    return  0;
}
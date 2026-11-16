#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if (n == 0) return "";
        sort(strs.begin(), strs.end());
        
        string first = strs[0];
        string last = strs[n - 1];
        string commonPrefix = "";
        int minLen = min(first.length(), last.length());
        for (int i = 0; i < minLen; i++) {
            if (first[i] == last[i]) {
                commonPrefix.push_back(first[i]);
            } else {
                break;
            }
        }
        
        return commonPrefix;
    }
int main(){
    return 0;
}
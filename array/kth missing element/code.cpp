#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int findKthPositive(vector<int>& arr, int k) {
    int n = arr.size();
    unordered_set<int> extra;
    
    for (int i = 0; i < n; i++) {
        while (arr[i] >= 1 && arr[i] <= n && arr[i] != arr[arr[i] - 1]) {
            swap(arr[i], arr[arr[i] - 1]);
        }
    }
    
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        if (arr[i] != i + 1) {
            ans.push_back(i + 1);
            if (arr[i] > n) {
                extra.insert(arr[i]);
            }
        }
    }
    
    int nextNum = n + 1;
    while (ans.size() < k) {
        if (extra.find(nextNum) == extra.end()) {
            ans.push_back(nextNum);
        }
        nextNum++;
    }
    
    return ans[k - 1];
}

int main() {
    vector<int> arr = {2, 3, 4, 7, 11};
    int k = 5;
    cout << "Kth Missing Positive: " << findKthPositive(arr, k) << endl;
    return 0;
}
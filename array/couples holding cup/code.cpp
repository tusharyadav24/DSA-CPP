#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int minSwapsCouples(vector<int>& row) {
        int n = row.size();
        vector<int> pos(n);
        for (int i = 0; i < n; i++) {
            pos[row[i]] = i;
        }
        int swaps = 0;
        for (int i = 0; i < n; i += 2) {
            int partner = row[i] ^ 1;
            if (row[i + 1] != partner) {
                int partnerIdx = pos[partner];
                pos[row[i + 1]] = partnerIdx;
                pos[partner] = i + 1;
                swap(row[i + 1], row[partnerIdx]);
                swaps++;
            }
        }
        return swaps;
    }
};
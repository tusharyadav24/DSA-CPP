#include<iostream>
using namespace std;
// Brute force approach
// void search(int mat[][4], int m, int n, int key){
//     for(int i = 0; i < m; i++){
//         for(int j = 0; j < n; j++){
//             if(mat[i][j] == key){
//                 cout << "key is found at i = " << i << " and j = " << j << endl;
//                 return; 
//             }
//         }
//     }
//     cout << -1 << endl;
// }

//Binary Search approach
#include<iostream>
using namespace std;

void search(int mat[][4], int m, int n, int key) {
    for (int i = 0; i < m; i++) {
        
        int start = 0, end = n - 1;
        
        while (start <= end) {
            int mid = (start + end) / 2;
            
            if (mat[i][mid] == key) {
                cout << "key is found at i = " << i << " and j = " << mid << endl;
                return;
            }
            else if (mat[i][mid] > key) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
    }
    cout << -1 << endl;
}

int main(){
    int m = 4, n = 4;
    int mat[4][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}
    };
    int key = 33;
    
    search(mat, m, n, key);
    return 0;
}
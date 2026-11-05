#include<iostream>
using namespace std;
bool search(int matrix[][4],int m,int n,int key){
    int i=0,j=m-1;
    while(i<n && j>=0){
       if(matrix[i][j]==key){
        cout<<"found at cell "<<"("<<i<<","<<j<<")";
        return true;
       }
       else if(matrix[i][j]>key){
        j--;
       }
       else{
        i++;
       }
    }
    cout<<"key not found";
    return false;
}

int main(){
    int m = 4, n = 4;
    int mat[4][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}};
    int key = 33;
    
    search(mat, 4, 4, key);
    return 0;
}

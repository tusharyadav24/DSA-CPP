#include<iostream>
using namespace std;
int diagonalSum(int matrix[][4],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=matrix[i][i];
        if(i!=n-i-1){
            sum+=matrix[i][n-i-1];
        }
    }
    return sum;
}
int main(){
    int matrix[4][4]={{2,3,4,5},
                      {6,7,8,9},
                      {1,3,4,5},
                      {5,6,7,8}
                            };
    cout<<diagonalSum(matrix,4);
    return 0;
}
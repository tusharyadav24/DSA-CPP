#include<iostream>
using namespace std;
void SpiralMatrix(int mat[][4],int n,int m){
int strow=0,stcol=0;
int endrow=n-1,endcol=m-1;
while(strow<=endrow && stcol<=endcol){
for(int j=stcol;j<=endcol;j++){
  cout<<mat[strow][j]<<" ";
}
for( int i=strow+1;i<=endrow;i++){
    cout<<mat[i][endcol]<<" ";
}
for(int j=endcol-1;j>=stcol;j--){
    if(strow==endrow){
        break;
    }
    cout<<mat[endrow][j]<< " ";
}
for(int i=endrow-1;i>=strow+1;i--){
    if(stcol==endcol){
        break;
    }
cout<<mat[i][stcol]<<" ";
}
strow++;stcol++;
endrow--;endcol--;
}

}

int main(){
    int mat[4][4]={{2,3,4,5},
                   {6,7,8,9},
                   {1,3,4,5},
                   {5,6,7,8}
                };
    SpiralMatrix(mat,4,4);
    return 0;
}
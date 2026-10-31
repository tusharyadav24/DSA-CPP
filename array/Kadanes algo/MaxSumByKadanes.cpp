#include<iostream>
using namespace std;
void MaxSubArrSum(int *arr,int n){
    int MaxNum=INT32_MIN;
   int CurrSum=0;
   for(int i=0;i<n;i++){
    CurrSum+=arr[i];
    MaxNum=max(MaxNum,CurrSum);
    if(CurrSum<0){
        CurrSum=0;
    }
   }
   cout<<"max sum is : "<<CurrSum;
}
int main(){
int arr[]={2,3,4,5,6,7};
int n=sizeof(arr)/sizeof(int);
    MaxSubArrSum(arr,n);
    return 0;
}
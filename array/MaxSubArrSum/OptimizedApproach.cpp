#include<iostream>
using namespace std;
void MaxSubArrSum(int *arr,int n){
    int MaxNum=INT32_MIN;
    for(int start=0;start<n;start++){
        int CurrSum=0;
        for(int end=start;end<n;end++){
            CurrSum+=arr[end];
            MaxNum=max(MaxNum,CurrSum);
        }
        cout<<endl;
    }
    cout<<"max num is : "<<MaxNum;
}
int main(){
int arr[]={2,3,4,5,6,7};
int n=sizeof(arr)/sizeof(int);
    MaxSubArrSum(arr,n);
    return 0;
}
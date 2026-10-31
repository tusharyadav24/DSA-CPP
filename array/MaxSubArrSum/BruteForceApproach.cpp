#include<iostream>
using namespace std;
void MaxSubArrSum(int *arr,int n){
    int MaxNum=INT32_MIN;
    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
            int ArrSum=0;
            for(int i=start;i<=end;i++){
              ArrSum+=arr[i];
            }
            cout<<ArrSum<<",";
            MaxNum=max(MaxNum,ArrSum);
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
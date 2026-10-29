#include<iostream>
using namespace std;
void printArr(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
}
int main(){
    int arr[]={4,3,5,6,4,3};
    int n=sizeof(arr)/sizeof(int);
    int start=0,end=n-1;
    while(start<end){
        // swap(arr[start],arr[end]);
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    printArr(arr,n);
    return 0;
}
#include<iostream>
using namespace std;
void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
}
int main(){
   int arr[]={5,2,5,7,3,6};
   int n=sizeof(arr)/sizeof(int);
   printArr(arr,n);
   return 0;
}
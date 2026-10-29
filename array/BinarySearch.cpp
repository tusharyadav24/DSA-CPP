#include<iostream>
using namespace std;
int BinSearch(int *arr,int n,int key){
    int start=0,end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[]={3,5,6,7,4,6,8};
    int n=sizeof(arr)/sizeof(int);
    int key=5;
    cout<<BinSearch(arr,n,key);
    return 0;
}
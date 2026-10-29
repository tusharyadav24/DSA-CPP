#include<iostream>
using namespace std;
int SearchElement(int *arr,int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={3,5,6,4,6};
    int n=sizeof(arr)/sizeof(int);
    int key=6;
    cout<<SearchElement(arr,n,key);
    return 0;
}
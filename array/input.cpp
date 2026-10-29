#include<iostream>
using namespace std;
int main(){
    int arr[3];
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        cout<<"Enter the value: "<<endl;
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
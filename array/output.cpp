#include<iostream>
using namespace std;
int main(){
    int arr[3]={4,5,6};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
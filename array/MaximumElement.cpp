#include<iostream>
using namespace std;
int main(){
  int num;
  cout<<"Enter number of elements to be inserted in array: ";
  cin>>num;
  int arr[num];
  int n=sizeof(arr)/sizeof(int);
  cout<<"insert elements in array: "<<endl;
  for(int i=0;i<n;i++){
    cout<<"enter element: ";
    cin>>arr[i];
  }
  int max=arr[0];
  for(int i=0;i<n;i++){
    if(arr[i]>max){
      max=arr[i];
    }
  }
  cout<<max;
  return 0;
}
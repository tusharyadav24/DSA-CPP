#include<iostream>
using namespace std;
void print(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void CountSort(int *arr,int n){
  int freq[10000]={0};
  int minVal=INT32_MAX,maxVal=INT32_MIN;
  for(int i=0;i<n;i++){
    minVal=min(minVal,arr[i]);
    maxVal=max(maxVal,arr[i]);
  }
  for(int i=0;i<n;i++){
    freq[arr[i]]++;
  }
  for(int i=minVal,j=0;i<=maxVal;i++){
    while(freq[i]>0){
      arr[j++]=i;
      freq[i]--;
    }
  }
  print(arr,n);
}

int main(){
    int arr[]={5,4,3,2,1};
    int n=sizeof(arr)/sizeof(int);
    CountSort(arr,n);
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    int rem;
    cout<<"enter the value of n: ";
    cin>>n;
    while(n>0){
      rem=n%10;
      sum+=rem;
      n=n/10;
    }
    cout<<sum;
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int lastDig;
    while(n>0){
       lastDig=n%10;
       cout<<lastDig;
       n/=10;
    }
    return 0;
}
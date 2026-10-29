#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int res=0;
    int lastDig;
    while(n>0){
        lastDig=n%10;
        res=res*10+lastDig;
        n/=10;
    }
    cout<<res;
    return 0;
}
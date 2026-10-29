#include<iostream>
using namespace std;
int main(){
    int n=158;
    int num=n;
    int lastDig;
    int cubeSum=0;
    while(num>0){
       lastDig=num%10;
       cubeSum=cubeSum+lastDig*lastDig*lastDig;
       num/=10;
    }
    if(n==cubeSum){
        cout<<"number is armstorng";
    }
    else{
        cout<<"num is not a armstrong";
    }
    return 0;
}
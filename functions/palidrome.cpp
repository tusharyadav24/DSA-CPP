#include<iostream>
using namespace std;
int reverse(int n){
    int lastDig;
    int res=0;
    int sum=0;
    while(n>0){
        lastDig=n%10;
        res=res*10+lastDig;
        n=n/10;
    }
    return res;
}
bool isPalidrome(int num){
    int reverseNum=reverse(num);
    return num==reverseNum;
}
int main(){
    cout<<isPalidrome(1214);
}
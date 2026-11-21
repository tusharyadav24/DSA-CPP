#include<iostream>
using namespace std;
bool isPowerOfFour(int n){
    if(n<=0){
        return false;
    }
    while(n%4==0){
        n=n/4;
    }
    return n==1;
}
int main(){
    cout<<isPowerOfFour(4);
    return 0;
}
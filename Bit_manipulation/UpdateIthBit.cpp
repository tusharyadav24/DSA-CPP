#include<iostream>
using namespace std;
void UpdateIthBit(int n,int i,int val){
    n=n & ~(1<<i);
    n=n | (val<<i);
    cout<<n;
}
int main(){
    UpdateIthBit(7,2,0);
    return 0;
}
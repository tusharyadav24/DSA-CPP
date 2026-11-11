#include<iostream>
using namespace std;
bool isPowerOf2(int n){
    if((n>0)&&(!(n & n-1))){
        return true;
    }
    return false;
}
int main(){
    cout<<isPowerOf2(4);
    return 0;
}
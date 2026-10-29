#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *ptr=&a;
    // cout<<*ptr<<" = "<<*(&a)<<endl;
    *ptr=30;
    cout<<a;
    return 0;
}
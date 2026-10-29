#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *ptr=&a;
    // cout<<&a<<" = "<<ptr<<endl;
    int **ptr2=&ptr;
    cout<<ptr2<<" "<<ptr<<" "<<&a;
    return 0;
}
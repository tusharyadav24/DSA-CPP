#include<iostream>
using namespace std;
int product(int a,int b){
    int mul=a*b;
    return mul;
}
int main(){
    int a;
    int b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<"mul= "<<product(a,b);
    return 0;
}
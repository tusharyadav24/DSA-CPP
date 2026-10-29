#include<iostream>
using namespace std;
int main(){
    //using if else
    int a;
    int b;
    char op;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the operation: ";
    cin>>op;
    cout<<"Enter the value of b: ";
    cin>>b;
    // if(op == '+'){
    //   cout<<"a + b = " <<(a+b);
    // }
    // else if(op=='-'){
    //     cout<<"a - b = "<<(a-b);
    // }
    // else if(op=='/'){
    //     cout<<"a / b = "<<(a/b);
    // }
    // else if(op=='*'){
    //     cout<<"a * b = "<<(a*b);
    // }
    // else{
    //     cout<<"Invalid Operation";
    // }
    //switch statement
    switch(op){
        case '+':cout<<"a + b = "<<(a+b);
        break;
        case '-':cout<<"a - b = "<<(a-b);
        break;
        default:"ivalid operation";
    }
    return 0;
}
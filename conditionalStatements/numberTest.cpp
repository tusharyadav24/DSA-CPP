#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the value of a:  ";
    cin>>a;
    if(a<0){
        cout<<"Entered number is negative";
    }
    else if(a>0){
        cout<<"Entered number is positive";
    }
    else{
        cout<<"Entered number is zero";
    }
    return 0;
}
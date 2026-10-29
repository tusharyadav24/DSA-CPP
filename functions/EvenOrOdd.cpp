#include<iostream>
using namespace std;
int isEven(int n){
    if(n%2==0){
        cout<<"number is even";
    }
    else{
        cout<<"number is odd";
    }
}
int main(){
    isEven(4);
    return 0;
}
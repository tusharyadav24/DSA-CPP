#include<iostream>
using namespace std;
void EvenOrOdd(int num){
    if(!(num&1)){
        cout<<"number is even";
    }
    else{
        cout<<"number is odd";
    }
}
int main(){
    EvenOrOdd(3);
    return 0;
}
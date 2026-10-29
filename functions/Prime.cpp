#include<iostream>
#include<cmath>
using namespace std;
int checkPrime(int n){
    bool isPrime=true;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            isPrime=false;
        }
    }
    if(isPrime){
        cout<<"number is prime";
    }
    else{
        cout<<"number is composite";
    }
}
int main(){
    checkPrime(21);
    return 0;
}

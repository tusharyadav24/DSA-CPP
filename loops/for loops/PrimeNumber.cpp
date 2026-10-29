#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n=7;
    bool isPrime=true;
    for(int i=2;i<=sqrt(n);i++){
       if(n%i==0){
        isPrime=false;
        break;
       }
    }
    if(isPrime==true){
        cout<<"number is prime";
    }
    else{
        cout<<"number is not prime";
    }
    return 0;
}
// #include<iostream>
// using namespace std;
// int main(){
//     int n=7;
//     bool isPrime=true;
//     for(int i=2;i<=n-1;i++){
//        if(n%i==0){
//         isPrime=false;
//         break;
//        }
//     }
//     if(isPrime==true){
//         cout<<"number is prime";
//     }
//     else{
//         cout<<"number is not prime";
//     }
//     return 0;
// }
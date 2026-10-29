#include<iostream>
using namespace std;
int factorial(int x){
    int fact=1;
    for(int i=x;i>=1;i--){
        fact*=i;
    }
    return fact;
}
int getBinomial(int n,int r){
    int val1=factorial(n);
    int val2=factorial(r);
    int val3=factorial(n-r);
    int result=val1/(val2*val3);
    return result;
}
int main(){
    cout<<getBinomial(3,2);
    return 0;
}
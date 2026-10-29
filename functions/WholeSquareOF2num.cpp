#include<iostream>
using namespace std;
int sq(int a,int b){
    return ((a*a)+(b*b)+(2*a*b));
}
int main(){
    cout<<sq(2,3);
    return 0;
}
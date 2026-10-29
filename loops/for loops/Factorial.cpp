#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int product=1;
    if(n<0){
        cout<<"Enter a valid number ";
    }
    else{
    for(int i=n;i>=1;i--){
        product*=i;
    }
    cout<<"The factorial of "<<n<<" is "<<product;
    }
    return 0;
}
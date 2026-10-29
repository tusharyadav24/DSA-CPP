#include<iostream>
using namespace std;
int main(){
    int n;
    int i=0;
    while(true){
        cout<<"Enter the value of n: ";
        cin>>n;
        if(n%10==0){
            cout<<"You entered multiple of 10";
            break;
        }
    }
    return 0;
}
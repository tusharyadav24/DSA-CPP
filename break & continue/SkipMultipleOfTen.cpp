#include<iostream>
using namespace std;
int main(){
    int n;
    while(true){
      cout<<"Enter the value of n: ";
      cin>>n;
      if(n%10==0){
        cout<<"You entered multiple of 10 ! "<<endl;
        continue;
      }
    }
    return 0;
}
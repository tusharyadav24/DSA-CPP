#include<iostream>
using namespace std;
int main(){
    int n=10;
    int first=0,second=1;
    cout<<first<<" ";
    int third;
    for(int i=2;i<n;i++){
        third=first+second;
        cout<<third<<" ";
        first=second;
        second=third;
    }
    return 0;
}
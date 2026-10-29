#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1;i<=n;i++){
      if(i==1 || i==n){
        for(int j=1;j<=n;j++){
            cout<<"* ";
        }
        cout<<endl;
      }
      else{
            cout<<"* ";
            for(int l=2;l<=n-1;l++){
              cout<<"  ";
            }
            cout<<"* ";
            cout<<endl;
      }
    }
    return 0;
}
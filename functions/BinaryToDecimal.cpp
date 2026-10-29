#include<iostream>
using namespace std;
void BinToDec(int num){
    int n=num;
    int lastDig;
    int decVal=0;
    int pow=1;
    while(n>0){
        lastDig=n%10;
        decVal+=lastDig*pow;
        pow=pow*2;
        n=n/10;
    }
    cout<<decVal<<endl;
}
void DecToBin(int DecNum){
        int n=DecNum;
        int BinVal=0;
        int pow=1;
        while(n>0){
            int rem=n%2;
            BinVal=BinVal+rem*pow;
            n=n/2;
            pow=pow*10;
        }
        cout<<BinVal<<endl;
}
int main(){
    BinToDec(101);
    DecToBin(5);
    return 0;
}
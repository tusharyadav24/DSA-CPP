#include<iostream>
#include<cstring>
using namespace std;
void reverse(char str[],int n){
   int start=0;int end=n-1;
   while(start<end){
    swap(str[start],str[end]);
    start++;
    end--;
   }
}

int main(){
    char str[]="bruce wayne";
    reverse(str,strlen(str));
    cout<<str;
    return 0;
}
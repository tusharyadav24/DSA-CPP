#include<iostream>
#include<cstring>
using namespace std;
// void toUpperCase(char str[],int n){
//     for(int i=0;i<n;i++){
//         char ch=str[i];
//         if(ch>='A' && ch<='Z'){
//             continue;
//         }
//         else{
//             str[i]=ch-'a'+'A';
//         }
//     }
// }
void toLowerCase(char str[],int n){
    for(int i=0;i<n;i++){
        char ch=str[i];
        if(ch>='a' && ch<='z'){
            continue;
        }
        else{
            str[i]=ch-'A'+'a';
        }
    }
}
int main(){
    char str[]="brUCE";
    toLowerCase(str,strlen(str));
    cout<<str;
    return 0;
}
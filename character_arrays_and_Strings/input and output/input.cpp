#include<iostream>
using namespace std;
int main(){
    char word[50];
    // cin>>word; //ignore letters after white spaces
    cin.getline(word,50,'.');
    return 0;
}
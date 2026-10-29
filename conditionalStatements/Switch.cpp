#include<iostream>
using namespace std;
int main(){
    int day;
    cout<<"Enter day: ";
    cin>>day;
    switch(day){
        case 1:cout<<"sunday";
        break;
        case 2:cout<<"monday";
        break;
        default:cout<<"invalid";
    }
    return 0;
}
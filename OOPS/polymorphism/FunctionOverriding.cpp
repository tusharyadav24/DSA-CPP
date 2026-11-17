#include<iostream>
using namespace std;
class Parent{
    public:
    void show(){
        cout<<"parent constructor";
    }
};
class Child: public Parent{
    public:
    void show(){
        cout<<"child constructor";
    }
};
int main(){
    Child c1;
    Parent p1;
    p1.show();
    c1.show();
    return 0;
}
#include<iostream>
using namespace std;
class Parent{
    public:
    virtual void hello(){
        cout<<"parent constructor";
    }
};
class Child: public Parent{
    public:
    void hello(){
        cout<<"child constructor";
    }
};
int main(){
    Child child1;
    Parent *ptr;
    ptr=&child1;// run time binding
    ptr->hello();//virtual function
    return 0;
}
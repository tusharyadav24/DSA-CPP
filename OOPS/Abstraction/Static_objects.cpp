#include<iostream>
using namespace std;
class Test {
public:
    Test()  { cout << "Constructor called\n"; }
    ~Test() { cout << "Destructor called\n"; }
};

void myFunc() {
    static Test t1; // Static object
}

int main() {
    myFunc();
    cout << "Main function ending...\n";
    return 0;
}
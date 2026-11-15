#include<iostream>
#include<string>
using namespace std;
class Teacher{
   public:
   int salary;
   string subject;
};
class Student{
    public:
    int roolno;
    float cgpa;
};
class TA : public Teacher,public Student{
public:
string name;
};
int main(){
    TA ta1;
    ta1.name="tushar";
    ta1.subject="FSD";
    ta1.cgpa=6.7;
    cout<<ta1.cgpa<<endl;
    cout<<ta1.name<<endl;
    cout<<ta1.subject<<endl;
    return 0;
}
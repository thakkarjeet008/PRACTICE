/*
    MULTIPLE INHERITANCE 

    PARENT CLASS (BASE CLASS)
    PARENT CLASS (BASE CLASS)
    CHILD CLASS (DERIVED CLASS)

    FOR EXAMPLE :
    STUDENT CLASS (BASE CLASS)  // NAME , ROLL NO 
    TEACHER  CLASS (BASE CLASS) // SUBJECT , SALARY
    TA (TEACHING ASSISTANT) CLASS (DERIVED CLASS) // NAME , ROLL NO , SUBJECT , SALARY
*/

#include<iostream>
#include<string>
using namespace std;

class Student
{
    public:
    string name;
    int rollNo;
};

class Teacher
{
    public:
    string subject;
    double salary;
};

class TA : public Student, public Teacher
{
    public:
    void getInfo()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<rollNo<<endl;
        cout<<"Subject: "<<subject<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};

int main()
{
    TA t1;
    t1.name = "Jeet";
    t1.rollNo = 101;
    t1.subject = "C++";
    t1.salary = 50000;

    t1.getInfo();
    
    return 0;
}


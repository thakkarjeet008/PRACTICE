/*
    Hybrid Inheritance in C++

    Person (Base Class)
       |
    -------------------
    |                 |
 Student          Teacher
    |
GraduateStudent
    |
    TA
*/

#include <iostream>
#include <string>
using namespace std;

// Base Class
class Person
{
public:
    string name;
    int age;
};

// Virtual Inheritance
class Student : virtual public Person
{
public:
    int rollNo;
};

class Teacher : virtual public Person
{
public:
    string subject;
};

// Derived from Student
class GraduateStudent : public Student
{
public:
    string degree;
};

// TA inherits from Teacher and GraduateStudent
class TA : public GraduateStudent, public Teacher
{
public:
    void getInfo()
    {
        cout << "\nName: " << name << endl;
        cout << "\nAge: " << age << endl;
        cout << "\nRoll No: " << rollNo << endl;
        cout << "\nSubject: " << subject << endl;
        cout << "\nDegree: " << degree << endl;
    }
};

int main()
{
    TA t1;

    t1.name = "Jeet";
    t1.age = 20;
    t1.rollNo = 101;
    t1.subject = "C++";
    t1.degree = "M.Tech";

    t1.getInfo();

    return 0;
}
/*
    MULTILEVEL INHERITANCE :

    PARENT CLASS (BASE CLASS)
    PARENT CLASS (DERIVED CLASS)
    CHILD CLASS (DERIVED CLASS)

    FOR EXAMPLE :

    PERSON CLASS (BASE CLASS)
    STUDENT CLASS (DERIVED CLASS)
    GRADUATE STUDENT CLASS (DERIVED CLASS)

*/

#include<iostream>
#include<string>
using namespace std;

class Person
{
    public:
    string name;
    int age;

    Person()
    {
        cout<<"\n Parent Constructor called\n"<<endl;
    }

    // destructor
    ~Person()
    {
        cout<<"\nHi , i am destructor of Person class\n"<<endl;
    }

};

class Student : public Person
{
    public:
    int rollNo;

    Student()
    {
        cout<<"\nChild Constructor called\n"<<endl;
    }

};

class GraduateStudent : public Student
{
    public:
    string degree;

    GraduateStudent()
    {
        cout<<"\nGrandChild Constructor called\n"<<endl;
    }

    void getInfo()
    {
        cout<<"\nName: "<<name<<endl;
        cout<<"\nAge: "<<age<<endl;
        cout<<"\nRoll No: "<<rollNo<<endl;
        cout<<"\nDegree: "<<degree<<endl;
    }

};

int main()
{
    GraduateStudent gs;
    gs.name = "Jeet";
    gs.age = 20;
    gs.rollNo = 101;
    gs.degree = "B.Tech";

    gs.getInfo();

    return 0;
}


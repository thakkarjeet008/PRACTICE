/*
    HIERARCHICAL INHERITANCE: WHEN MORE THAN ONE DERIVED CLASS IS INHERITED FROM A SINGLE BASE CLASS, IT IS CALLED HIERARCHICAL INHERITANCE.


    PARENT CLASS (BASE CLASS)
    CHILD CLASS (DERIVED CLASS)
    CHILD CLASS (DERIVED CLASS)

    FOR EXAMPLE :

    PERSON CLASS (BASE CLASS)  // NAME , AGE
    STUDENT CLASS (DERIVED CLASS)  //  ROLL NO
    TEACHER CLASS (DERIVED CLASS)  // SUBJECT 
*/

#include<iostream>
#include<string>
using namespace std;

class Person
{
    public:
    string name;
    int age;

};
class Student : public Person
{
    public:
    int rollNo;
};
class Teacher : public Person
{
    public:
    string subject;
};

int main()
{
    Student s1;
    s1.name = "Jeet";
    s1.age = 20;
    s1.rollNo = 101;

    cout<<"\nStudent Info: \n"<<endl;
    cout<<"Name: "<<s1.name<<endl;
    cout<<"Age: "<<s1.age<<endl;
    cout<<"Roll No: "<<s1.rollNo<<endl;

    Teacher t1;
    t1.name = "John";
    t1.age = 35;
    t1.subject = "C++";

    cout<<"\nTeacher Info: \n"<<endl;
    cout<<"Name: "<<t1.name<<endl;
    cout<<"Age: "<<t1.age<<endl;
    cout<<"Subject: "<<t1.subject<<endl;

    
    return 0;
}
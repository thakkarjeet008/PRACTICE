/*

copy constructor - Special constructor used to copy propwerties of one object to another object of the same class.

*/

// exampkle of copy constructor

#include<iostream>
#include<string>
using namespace std;

class Teacher 
{
    private:
    double salary;

    public:
    // properties

    // parameterized constructor

        Teacher(string name, string department, string subject, double salary) // parameterized constructor
        {
            cout<<"\nParameterized constructor called\n"<<endl;
            this->name = name;
            this->department = department;
            this->subject = subject;
            this->salary = salary;
        }

        // copy constructor
        Teacher(Teacher &t) // copy constructor
        {
            cout<<"\nCopy constructor called\n"<<endl;
            name = t.name;
            department = t.department;
            subject = t.subject;
            salary = t.salary;
        }
    string name;
    string department;
    string subject;
    
        // setter functions
        void setSalary(double s)
        {
            salary = s;
        }

        // getter functions
        double getSalary()
        {
            return salary;
        }
    // methods / member functions

    void changeDepartment(string newDepartment)
    {
        department = newDepartment;
    }

    void getInfo()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Department: "<<department<<endl;
        cout<<"Subject: "<<subject<<endl;
        cout<<"Salary: "<<getSalary()<<endl;
    }

};
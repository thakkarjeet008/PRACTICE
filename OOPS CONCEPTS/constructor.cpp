/*

Constructor - Special method invoked automatically when an object is created. 
It has the same name as the class and 
does not have a return type. 
Constructors can be overloaded to provide different ways of initializing objects.

--> memory allocation for the object is done when the constructor is called.

types of constructors:
1. Default constructor - A constructor that takes no arguments and initializes the object with default values.
2. Parameterized constructor - A constructor that takes arguments and initializes the object with specific values.
3. Copy constructor - A constructor that creates a new object as a copy of an existing object.

*/



#include<iostream>
#include<string>
using namespace std;

class Teacher 
{
    private:
    double salaray;

    public:

        Teacher() // default constructor
        {
            cout<<"\nDefault constructor called\n"<<endl;
            salaray = 0.0;
            name = "Unknown";
            department = "Unknown";
            subject = "Unknown";
        }


    // properties
    string name;
    string department;
    string subject;
    
        // setter functions
        void setSalary(double s)
        {
            salaray = s;
        }

        // getter functions
        double getSalary()
        {
            return salaray;
        }
    // methods / member functions

    void changeDepartment(string newDepartment)
    {
        department = newDepartment;
    }

};

int main()
{
    Teacher t1;
   /*
    t1.name="JEET";
    t1.department="CSE";
    t1.subject="OOPS";
    t1.setSalary(50000);

    */

    cout<<"Name: "<<t1.name<<endl;
    cout<<"Department: "<<t1.department<<endl;
    cout<<"Subject: "<<t1.subject<<endl;
    cout<<"Salary: "<<t1.getSalary()<<endl;
  
    return 0;
}


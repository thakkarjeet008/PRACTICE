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

        Teacher(string n, string d, string s, double sal) // parameterized constructor
        {
            cout<<"\nParameterized constructor called\n"<<endl;
            name = n;
            department = d;
            subject = s;
            salary = sal;
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

int main()
{
    Teacher t1("JEET", "CSE", "OOPS", 50000);
    t1.getInfo();
    return 0;
}
#include<iostream>
#include<string>
using namespace std;

class Teacher 
{
    private:
    double salaray;

    public:
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
    t1.name="JEET";
    t1.department="CSE";
    t1.subject="OOPS";
    t1.setSalary(50000);

    cout<<"Name: "<<t1.name<<endl;
    cout<<"Department: "<<t1.department<<endl;
    cout<<"Subject: "<<t1.subject<<endl;
    cout<<"Salary: "<<t1.getSalary()<<endl;

    return 0;
}
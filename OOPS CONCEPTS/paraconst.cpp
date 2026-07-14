#include<iostream>
#include<string>
using namespace std;

class Teacher 
{
    private:
    double salaray;

    public:
    // properties

    // parameterized constructor
    
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
    Teacher t1;
    

   
    return 0;
}
/*

Destructor in C++ is a special member function that is automatically invoked when an object goes out of scope or is explicitly deleted. 
It is used to release resources that the object may have acquired during its lifetime, such as memory, file handles, or network connections.    

--> used to deallocate memory .

company level example :

  string name;
    int age;
    double marks;
    *cgpaPtr =  cgpa 

     ~Strudent()
    {
        cout<<"\nHi , i delete everything\n"<<endl;
        delete cgpaPtr; // deallocate memory

        // delete is important to avoid memory leaks
    }



*/

#include<iostream>
#include<string>
using namespace std;

class Strudent
{
    public:
    string name;
    int age;
    double marks;

    // parameterized constructor
    Strudent(string n, int a, double m)
    {
        cout<<"\nParameterized constructor called\n"<<endl;
        name = n;
        age = a;
        marks = m;

    }
    void getInfo()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Marks: "<<marks<<endl;
    }

    // destructor
    ~Strudent()
    {
        cout<<"\nHi , i am destructor\n"<<endl;
    }
};

int main()
{
    Strudent s1("Jeet", 20, 90.5);
    s1.getInfo();
   return 0;
}

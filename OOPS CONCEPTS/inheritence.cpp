/*

WHEN PROPERTIES & MEMBER FUNCTIONS OF BASE CLASS ARE PASSED ON TO THE DERIVED CLASS, IT IS CALLED INHERITANCE.

TYPES OF INHERITANCE:
1. SINGLE INHERITANCE: WHEN A DERIVED CLASS IS INHERITED FROM A SINGLE BASE CLASS, IT IS CALLED SINGLE INHERITANCE.
2. MULTIPLE INHERITANCE: WHEN A DERIVED CLASS IS INHERITED FROM MORE THAN ONE BASE CLASS, IT IS CALLED MULTIPLE INHERITANCE.
3. MULTILEVEL INHERITANCE: WHEN A DERIVED CLASS IS INHERITED FROM ANOTHER DERIVED CLASS, IT IS CALLED MULTILEVEL INHERITANCE.
4. HIERARCHICAL INHERITANCE: WHEN MORE THAN ONE DERIVED CLASS IS INHERITED FROM A SINGLE BASE CLASS, IT IS CALLED HIERARCHICAL INHERITANCE.
5. HYBRID INHERITANCE: WHEN A DERIVED CLASS IS INHERITED FROM MORE THAN ONE BASE CLASS, AND THOSE BASE CLASSES ARE ALSO INHERITED FROM ANOTHER BASE CLASS,
         IT IS CALLED HYBRID INHERITANCE. 


         SINGLE INHERITANCE 
         ---> PARENT CLASS (BASE CLASS)
         ---> CHILD CLASS (DERIVED CLASS)
*/


// basic example of inheritance


#include<iostream>
#include<string>
using namespace std;

class Person
{
    public:
    string name;
    int age;

   /*
    Person(string name, int age)
    {
        cout<<"\nParameterized constructor of Person class called\n"<<endl;
        this->name = name;
        this->age = age;
    }
    */
   
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

    void getInfo()
    {
        cout<<"\nName: "<<name<<endl;
        cout<<"\nAge: "<<age<<endl;
        cout<<"\nRoll No: "<<rollNo<<endl;
    }

    // destructor
    ~Student()
    {
        cout<<"\nHi , i am destructor of Student class\n"<<endl;
    }


};

int main()
{
    Student s1;
    s1.name = "Jeet";
    s1.age = 20;
    s1.rollNo = 101;

    s1.getInfo();
}

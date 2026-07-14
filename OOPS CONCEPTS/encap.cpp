// Encapsulation :

/*

Encpsulation is wrapping up of data and function into a single unit called class. 
It is also known as data hiding. 
In encapsulation, the data members of a class are made private and can be accessed only through public member functions.
This helps to protect the data from unauthorized access and modification


USED AS DATA HIDING TECHNIQUE

*/


#include<iostream>
#include<string>
using namespace std;

class Account
{
    private:
    double balance;
    string password;   // data hiding.....

    public:
    int accountNumber;
    string userName;

    // setter functions
        void setBalance(double b)
        {
            balance = b;
        }

        void setPassword(string p)
        {
            password = p;
        }

        // getter functions
        double getBalance()
        {
            return balance;
        }


};





int main()
{
    Account a1;
    a1.accountNumber=123456;
    a1.userName="JEET";
    a1.setBalance(10000);
    a1.setPassword("jeet@123");

    cout<<"Account Number: "<<a1.accountNumber<<endl;
    cout<<"User Name: "<<a1.userName<<endl;


   //  cout<<"Balance : "<<a1.getBalance()<<endl;  

    return 0;
}



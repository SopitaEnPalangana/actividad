#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
using namespace std;
 
namespace System
{
    class Customer
    {
    private:
        string code;
        string name;
        string address;

    public:
        Customer(string code, string name, string address);
        string getCode();
        string getName();
        string getAddress();
    };
}

#endif
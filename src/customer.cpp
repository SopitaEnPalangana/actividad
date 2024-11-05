#include "customer.hpp"
using namespace std;

namespace System
{

    Customer::Customer(string code, string name, string address){
        this->code = code;
        this->name = name;
        this->address = address;
    }

    string Customer::getCode(){
        return this->code;
    }

    string Customer::getName(){
        return this->name;
    }

    string Customer::getAddress(){
        return this->address;
    }
}

#ifndef ORDER_H
#define ORDER_H

#include <iostream>
#include <list>
#include <string>
#include "customer.hpp"
#include "article.hpp"

using namespace std; 

namespace System
{
    class Order
    {
    private:
        string code;
        list<Article*> articlelist;  
        Customer* customer;
    public:
        Order(string code, Customer* customer);
        void attach(Article* article);
        void show();
    };
}
#endif
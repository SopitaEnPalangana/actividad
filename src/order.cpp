#include "order.hpp"
using namespace std;

namespace System
{
    
    Order::Order(string code, Customer* customer){
        this->code = code;
        this->customer = customer;
    }

    void Order::attach(Article* article){
        this->articlelist.push_back(article);
    }

    void Order::show(){
        for(Article* article : articlelist){
            cout << article->getName() <<endl;
        }
    }
}

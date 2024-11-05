#ifndef ARTICLE_H
#define ARTICLE_H

#include <iostream>
using namespace std;

namespace System
{
    class Article
    {
        private:
            string code;
            string name;
            double price;

        public:
            Article(string code, string name, double price);
            string getCode();
            string getName();
            double getPrice();
    };
}
#endif
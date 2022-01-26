#include <iostream>
#include <string>
using namespace std;

class st {
        public:
           st();
           st(const string a);
           ~st();
           string operator = (st& obj);
           string operator +(const st& obj);
           string operator += (const st& obj);
           int operator [] (int phv);
        private:
           string str;
        public:
           string append(const string &app);
           string swap(st& obj);
           int size_g();
           void find_f(string q);
};

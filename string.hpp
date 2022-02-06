#include <iostream>
#include <string>
using namespace std;

class st {
        public:
           st();
           st(const string a);
           ~st();
           void operator = (st& obj);
           void operator +(const st& obj);
           void operator += (const st& obj);
           int operator [] (int phv);
        private:
           string str;
        public:
           void append(const string &app);
           void swap(st& obj);
           int size_g();
           void find_f(string q);
};

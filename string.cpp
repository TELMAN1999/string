#include <iostream>
#include <string>
#include <cassert>
using namespace std;

class st {
	public:
st();
st(string a);
~st();
std::string operator = (string k);
std::string operator +(string g1);
std::string operator += (string phv);
int operator [] (int phv);
	private:
string str;
	public:
std::string append(string app);
std::string swap(string a, string b);
 int size_g();
 void find_f(string q);
};

int st::size_g(){
   cout <<str<<endl; 
   cout << str.length()<<endl;

   int size = str.length();
   return size;
};

st::st(){
};

st::st(string a){
   str=a;
        cout << str  <<endl;
 };

st::~st(){
};
 
std::string st::append(string app){
 
  str=str+app;
  return str;
};

std::string st::swap (string a, string b){

string c;
c=a;
a=b;
b=c;

return a,b;
};


void st::find_f(string q){

        size_t pos = str.find(q);
	if (pos != std::string::npos){
        cout << "Found " << endl;
	}
    else{
        cout << "Not found"<< endl;
    }
};

void test(){
st b("Hello");
b.size_g();
b.find_f("lo");
b.append("word");
st a;
}

std::string st::operator = (string av ){

  	av=str;
        cout << str <<endl;
	return str;
};


std::string st::operator +(string g1){

     str = g1+str;
     return str;

};


std::string  st::operator += (string phv){
  
str=phv+phv;

 return str;

};



int st::operator [] (int phv){
   
  return str[phv];

};
int main(){
st S("hello");
std::string my_st = "ggggg";
std::string y = S+=(my_st);
std::cout << y << std::endl;
//test();

return 0;
}


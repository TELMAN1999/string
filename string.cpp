#include <iostream>
#include <string>
#include "string.hpp"
using namespace std;

/*class st {
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
*/

 st::st(){
      };

 st::st(const string a){
        str=a;
        cout << str  <<endl;
      };

 st::~st(){
      };
 
 int st::size_g(){
      int size = str.length();
      return size;
      };


 string st::append(const string& app){
 
       str=str+app;
       return str;
      };

 string st::swap (st& obj){

       string sw;
       sw=str;
       str=obj.str;
       obj.str=sw;
    return str, obj.str;
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


 string st::operator = (st& obj){

  	obj.str=str;
	return str;
        };


 string st::operator +(const st& obj){

     str = obj.str  +str;
     return str;

    };


 string  st::operator += (const st& obj){
  
          str=str+str;
          return str;
          };



 int st::operator [] (int phv){
     return str[phv];
   };
/*
 void test(){

    st b("Hello");
    b.size_g();
    b.find_f("lo");
    b.append("word");
    st a("Barev");
    a.swap(b);
}

 int main(){
  st S("Hala");
  st t("Madrid");
  string y = (t=S);
  cout << y << endl;
  test();

    return 0;
 }*/

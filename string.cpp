#include <iostream>
#include <string>
#include "string.hpp"
using namespace std;


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


 void st::append(const string& app){
 
       str=str+app;
      };

 void st::swap (st& obj){

       string sw;
       sw=str;
       str=obj.str;
       obj.str=sw;
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


void st::operator = (st& obj){

  	obj.str=str;
        };


 void st::operator +(const st& obj){

     str = obj.str  +str;

    };


 void  st::operator += (const st& obj){
  
          str=str+str;
          };



 int st::operator [] (int phv){
     return str[phv];
   };


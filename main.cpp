#include <iostream>
#include <string>
#include "string.hpp"
using namespace std;


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
 }


#include <Rcpp.h>
using namespace Rcpp;

class MyClass
{
public:
  std::string text;
  char character;
  MyClass(std::string a = "Hello", char b = 'W')
  {
    text = a;
    character = b;
  }
private:
  int donothing = 3;
};

RCPP_EXPOSED_CLASS(MyClass);

RCPP_MODULE(MyClass){
  class_<MyClass>("MyClass")
  .constructor<std::string, char>()
  .field("text", &MyClass::text)
  .field("character", &MyClass::character)
  ;
};

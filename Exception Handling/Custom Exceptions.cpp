#include<iostream>
#include<exception>

using namespace std;

class MyException: public exception{ // inherit from exception class
public:
  virtual const char* what() const throw(){
    //A virtual function a member function which is declared within base class and is re-defined (Overriden) by derived class.
    //the const throw means that the what() cant and wont throw an exception
    return "Something bad happened";
  }
};

class Test {
public:
  void goesWrong(){
    throw MyException();
  }
};

int main(){
  Test test;
  try{
    test.goesWrong();
  }catch(MyException &e){
    cout<<e.what()<<endl;
  }
  return 0;
}

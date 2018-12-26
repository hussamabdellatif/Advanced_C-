#include <iostream>
using namespace std;

class CanGoWrong{
public:
  CanGoWrong(){
    char *pMemory = new char[9999999999999999];
    delete [] pMemory;
  }
};

int main(){
  try{
    CanGoWrong wrong;
  }catch(bad_alloc &e){
    cout<<"Exception: "<<e.what()<<endl;
  }
  cout<<"Still Running"<<endl;
  return 0;
}
//bad_alloc exception is an exception object of type Exception for memory error

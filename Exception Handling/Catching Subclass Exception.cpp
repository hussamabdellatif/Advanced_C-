#include <iostream>
#include <exception>
using namespace std;

void goesWrong(){
  bool error1Detected = true;
  bool error2Detected = false;

  if(error1Detected){
    throw bad_alloc();
  }
  if(error2Detected){
    throw exception();
  }
}

int main(){
  try{
    goesWrong();
  }
  //plymorphasim tells us that since bad alloc is a subclass of exception, the first catch block will execute.
  //its a better idea to catch the sub-class before its parent
  //Exception is parent, bad_alloc is sub-class of exception
  catch(bad_alloc &e){
    cout<<e.what()<<endl;
  }
  catch(exception &e){
    cout << e.what() <<endl;
  }
  return 0;
}

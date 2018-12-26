#include <iostream>
#include <string>
using namespace std;

void mightGoWrong(){
  bool error  = false;
  bool error2 = false;
  bool error3 = true;
  if(error){
    throw 8;
  }else if(error2){
    throw "Error2";
  }else if(error3){
    throw string("Error");
  }
}

int main(){
  try{
    mightGoWrong();
  }catch(int e){
    cout<<"Error"<<e<<endl;
  }catch(char const * e){
    cout<<"Error Message E"<<e<<endl;
  }catch(string &e){
    cout<<"String Error Message"<<e<<endl;
  }
  cout<<"Still Running"<<endl;
  return 0;
}

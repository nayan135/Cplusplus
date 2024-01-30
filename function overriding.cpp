#include<iostream>
using namespace std;
class base{
    public:
  virtual  void data(){
        cout<<"BASE CLASS KO FUNCTION";
    }
};
class derived:public base{
    public:
    void data(){
        cout<<"DERIVED CLASS KO FUNCTION";
    }
};
int main(){
    derived obj;
    obj.data();
}
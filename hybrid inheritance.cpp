#include<iostream>
using namespace std;
class hybrid(){
public:
void base(){
    cout<<"base class";
}
}
class derived():public hybrid(){
public:
void derived(){
    cout<<"derived class";
}
}
class child():public derived(){
public:
void child(){
    cout<<"child class";
}
}
class child1():public derived(){
public:
void child1(){
    cout<<"child1 class";   
}
}
int main(){
  child1 c;
  c.base();
  c.derived();
  c.child();
  c.child1();
    return 0;
}
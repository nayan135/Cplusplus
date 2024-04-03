#include<iostream>
using namespace std;
class hybrid{
public:
void base(){
    cout<<"base class";
}
};
class derived:public hybrid{
public:
void derive(){
    cout<<"derived class";
}
};
class Child:public derived{
public:
void child(){
    cout<<"child class";
}
};
class child1:public derived{
public:
void child2(){
    cout<<"child1 class";   
}
};
int main(){
  child1 c;
  Child c1;
  c.base();
  c.derived();
  c1.child();
  c.child2();
    return 0;
}
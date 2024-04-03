#include<iostream>
using namespace std;
class hybrid{
public:
void base(){
    cout<<"base class\n";
}
};
class derived:public hybrid{
public:
void derive(){
    cout<<"derived class\n";
}
};
class Child:public derived{
public:
void child(){
    cout<<"child class\n";
}
};
class child1:public derived{
public:
void child2(){
    cout<<"child1 class\n";   
}
};
int main(){
  child1 c;
  Child c1;
  c.base();
  c.derive();
  c1.child();
  c.child2();
    return 0;
}
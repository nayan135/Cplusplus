#include<iostream>
using namespace std;
class h{
    public:
    int x,y;
    void data(){
        cout<<"Enter two number";
        cin>>x>>y;
    }   
};
class mul: public h{
       public:
   void process(){
    cout<<x*y;
   }
};
class add: public h{
    public:
     void process(){
      cout<<x+y;
    }
};
int main(){
    mul obj;
    add obj2;
    obj.data();
    obj2.data();
    obj.process();
    obj2.process();
   return 0;
}
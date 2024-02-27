#include<iostream>
using namespace std;
class base1{
    public:
    void Ambiguity(){
        cout<<"base 1"<<endl;
    }
};
class base2{
    public:
    void Ambiguity(){
        cout<<"base 2"<<endl;
    }
};
class derived:public base1, public base2{
    public:
    void Ambiguity(){
        cout<<"base 3"<<endl;
    }
};
int main(){
    derived obj;
   obj.base1::Ambiguity();
   obj.base2::Ambiguity();
   obj.Ambiguity();
    return 0;
}
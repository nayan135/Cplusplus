#include<iostream>
using namespace std;
class base1{
    public:
    void Ambiguity(){
        cout<<"base 1";
    }
};
class base2{
    public:
    void Ambiguity(){
        cout<<"base 2";
    }
};
class base3:public base1, public base2{
    public:
    void Ambiguity(){
        cout<<"base 3";
    }
};
int main(){
    base3 obj;
   obj.base1::Ambiguity();
   obj.base2::Ambiguity();
    return 0;
}
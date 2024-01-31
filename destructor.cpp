#include<iostream>
using namespace std;
class Destructor{
    public:
    int a,b;
    Destructor(){
       a=1;
       b=2;
    }
    void process(){
        cout<<a*b<<endl;
    }
    ~Destructor(){
        cout<<"Destructor called"<<endl;
    }

};
int main(){
    Destructor n;
    n.process();
    Destructor c(n);
    c.process();
    return 0;
}
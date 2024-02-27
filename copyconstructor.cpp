#include<iostream>
using namespace std;
class Copy{
    public:
    int a,b;
    Copy(int x, int y){
        a=x;
        b=y;  
    }
    void process(){
        cout<<a*b<<endl;
    }
    Copy(const Copy &z){
        a=z.a;
        b=z.b;
    }
};
int main(){
    Copy n(10,3);
    n.process();
    Copy c(n);
    c.process();
    return 0;
}
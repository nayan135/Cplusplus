#include<iostream>
using namespace std;
class def{
    public:
    int a,b; 
    def(){
        a=50;
        b=50;
    }
    void display(){
        cout<<"a="<<a<<", b="<<b<<endl;
        }
        };
        int main() {
            def obj1;
            obj1.display();
            return 0;
            
}
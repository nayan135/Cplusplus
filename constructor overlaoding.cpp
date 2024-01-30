#include<iostream>
using namespace std;
class shasank{
    public:
    int a, b;
    shasank(){
        a=5;
        b=6;
    }
    shasank(int x, int y){
       a=x;
       b=y;
    }
    void display(){
        cout<<a<<endl;
        cout<<b<<endl;
    }
};
int main(){
    shasank f;
    shasank p(3,4);
    f.display();  
    p.display();
}